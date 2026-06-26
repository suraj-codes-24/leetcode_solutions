import os
import json
import re
from datetime import datetime
from config import config
from logger import logger
from leetcode_api import leetcode_api
from git_manager import git_manager

class SubmissionHandler:
    def __init__(self):
        self.state_file = os.path.join(config.repo_path, "sync_state.json")
        self.processed_ids = self.load_state()

    def load_state(self):
        if os.path.exists(self.state_file):
            try:
                with open(self.state_file, "r") as f:
                    return set(json.load(f))
            except Exception as e:
                logger.error(f"Error loading state: {e}")
        return set()

    def save_state(self):
        try:
            with open(self.state_file, "w") as f:
                json.dump(list(self.processed_ids), f)
        except Exception as e:
            logger.error(f"Error saving state: {e}")

    def clean_title(self, title):
        # Remove special characters and replace spaces with underscores
        clean = re.sub(r'[^a-zA-Z0-9\s]', '', title)
        return re.sub(r'\s+', '_', clean.strip())

    def format_problem_id(self, problem_id):
        try:
            return f"{int(problem_id):04d}"
        except:
            return str(problem_id)

    def generate_readme_content(self, question, details, version_history, latest_version):
        tags = [tag['name'] for tag in question.get('topicTags', [])]
        tags_str = ", ".join(tags) if tags else "None"
        
        difficulty = question.get('difficulty', 'Unknown')
        title = question.get('title', 'Unknown')
        frontend_id = question.get('questionFrontendId', '')
        title_slug = question.get('titleSlug', '')
        
        url = f"https://leetcode.com/problems/{title_slug}/"
        
        lang = details.get('lang', {}).get('verboseName', 'Unknown')
        timestamp = details.get('timestamp', 0)
        date_solved = datetime.fromtimestamp(int(timestamp)).strftime('%Y-%m-%d %H:%M:%S')
        
        runtime = details.get('runtimeDisplay', 'N/A')
        memory = details.get('memoryDisplay', 'N/A')
        runtime_pct = details.get('runtimePercentile', 'N/A')
        if runtime_pct != 'N/A' and runtime_pct is not None:
            runtime_pct = f"{float(runtime_pct):.2f}%"
            
        memory_pct = details.get('memoryPercentile', 'N/A')
        if memory_pct != 'N/A' and memory_pct is not None:
            memory_pct = f"{float(memory_pct):.2f}%"

        readme = f"# {title}\n\n"
        readme += f"- **Problem Number:** {frontend_id}\n"
        readme += f"- **Difficulty:** {difficulty}\n"
        readme += f"- **Tags:** {tags_str}\n"
        readme += f"- **Language:** {lang}\n"
        readme += f"- **Date Solved:** {date_solved}\n"
        readme += f"- **Runtime:** {runtime} (Beats {runtime_pct})\n"
        readme += f"- **Memory:** {memory} (Beats {memory_pct})\n\n"
        
        readme += f"## Problem Link\n[Official LeetCode URL]({url})\n\n"
        
        readme += f"## Approach\n(Add your approach here)\n\n"
        
        readme += f"## Notes\nSubmission generated automatically by LeetSync.\n\n"
        
        if version_history:
            readme += f"## Submission History\n"
            for v, data in version_history.items():
                date_str = datetime.fromtimestamp(int(data['timestamp'])).strftime('%Y-%m-%d %H:%M:%S')
                readme += f"- **{v}**: {data['lang']} on {date_str} (Runtime: {data['runtime']}, Memory: {data['memory']})\n"
                
        return readme

    def get_existing_versions(self, folder_path):
        versions = {}
        if not os.path.exists(folder_path):
            return versions
            
        for file in os.listdir(folder_path):
            match = re.match(r'v(\d+)_solution\..+', file)
            if match:
                versions[int(match.group(1))] = file
                
        return versions

    def load_history_json(self, folder_path):
        history_file = os.path.join(folder_path, "history.json")
        if os.path.exists(history_file):
            try:
                with open(history_file, "r") as f:
                    return json.load(f)
            except:
                pass
        return {}

    def save_history_json(self, folder_path, history):
        history_file = os.path.join(folder_path, "history.json")
        try:
            with open(history_file, "w") as f:
                json.dump(history, f, indent=2)
        except Exception as e:
            logger.error(f"Error saving history: {e}")

    def process_submission(self, submission):
        sub_id = str(submission.get('id'))
        if sub_id in self.processed_ids:
            return False

        logger.info(f"Processing new Accepted submission {sub_id} for {submission.get('title')}")

        title_slug = submission.get('titleSlug')
        details = leetcode_api.get_submission_details(sub_id)
        if not details:
            logger.error(f"Failed to get details for submission {sub_id}")
            return False

        question = leetcode_api.get_question_data(title_slug)
        if not question:
            # Fallback using submission data if question fetch fails
            question = {
                'title': submission.get('title'),
                'titleSlug': title_slug,
                'difficulty': 'Unknown',
                'questionFrontendId': '0000'
            }

        difficulty = question.get('difficulty', 'Unknown')
        frontend_id = self.format_problem_id(question.get('questionFrontendId', '0000'))
        clean_title = self.clean_title(question.get('title', 'Unknown'))
        
        folder_name = f"{frontend_id}_{clean_title}"
        folder_path = os.path.join(config.repo_path, difficulty, folder_name)
        
        if not os.path.exists(folder_path):
            os.makedirs(folder_path)

        # Handle versioning
        existing_versions = self.get_existing_versions(folder_path)
        next_v_num = max(existing_versions.keys()) + 1 if existing_versions else 1
        
        lang_name = details.get('lang', {}).get('name', 'txt')
        ext = config.languages.get(lang_name, lang_name)
        
        solution_filename = f"v{next_v_num}_solution.{ext}"
        solution_path = os.path.join(folder_path, solution_filename)

        # Save the code
        with open(solution_path, "w", encoding="utf-8") as f:
            f.write(details.get('code', ''))

        # Update History
        history = self.load_history_json(folder_path)
        version_key = f"v{next_v_num}"
        history[version_key] = {
            "lang": details.get('lang', {}).get('verboseName', lang_name),
            "timestamp": details.get('timestamp', submission.get('timestamp', 0)),
            "runtime": details.get('runtimeDisplay', 'N/A'),
            "memory": details.get('memoryDisplay', 'N/A'),
            "submission_id": sub_id
        }
        self.save_history_json(folder_path, history)

        # Generate README
        readme_content = self.generate_readme_content(question, details, history, version_key)
        readme_path = os.path.join(folder_path, "README.md")
        with open(readme_path, "w", encoding="utf-8") as f:
            f.write(readme_content)

        # Commit
        commit_message = f"Solved {question.get('questionFrontendId')}. {question.get('title')}"
        git_manager.add_commit_push(commit_message)

        # Mark as processed
        self.processed_ids.add(sub_id)
        self.save_state()
        
        logger.info(f"Successfully processed submission {sub_id} ({folder_name})")
        return True

submission_handler = SubmissionHandler()
