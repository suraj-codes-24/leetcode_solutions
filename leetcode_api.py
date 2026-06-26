import requests
from config import config
from logger import logger

class LeetCodeAPI:
    BASE_URL = "https://leetcode.com"
    GRAPHQL_URL = f"{BASE_URL}/graphql"

    def __init__(self):
        self.session = requests.Session()
        self.session.cookies.set("LEETCODE_SESSION", config.leetcode_session, domain="leetcode.com")
        self.session.cookies.set("csrftoken", config.leetcode_csrf_token, domain="leetcode.com")
        
        self.headers = {
            "Content-Type": "application/json",
            "x-csrftoken": config.leetcode_csrf_token,
            "Referer": self.BASE_URL,
            "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64)"
        }

    def get_recent_submissions(self, limit=20):
        query = """
        query getSubmissions($offset: Int!, $limit: Int!) {
            submissionList(offset: $offset, limit: $limit) {
                submissions {
                    id
                    statusDisplay
                    lang
                    runtime
                    timestamp
                    url
                    memory
                    title
                    titleSlug
                }
            }
        }
        """
        variables = {
            "offset": 0,
            "limit": limit
        }

        try:
            response = self.session.post(
                self.GRAPHQL_URL,
                headers=self.headers,
                json={"query": query, "variables": variables},
                timeout=10
            )
            response.raise_for_status()
            data = response.json()
            return data.get("data", {}).get("submissionList", {}).get("submissions", [])
        except Exception as e:
            logger.error(f"Failed to fetch recent submissions: {e}")
            return []

    def get_submission_details(self, submission_id):
        query = """
        query submissionDetails($submissionId: Int!) {
            submissionDetails(submissionId: $submissionId) {
                runtimeDisplay
                runtimePercentile
                memoryDisplay
                memoryPercentile
                code
                timestamp
                lang {
                    name
                    verboseName
                }
                question {
                    questionId
                    titleSlug
                    title
                }
            }
        }
        """
        variables = {"submissionId": int(submission_id)}
        
        try:
            response = self.session.post(
                self.GRAPHQL_URL,
                headers=self.headers,
                json={"query": query, "variables": variables},
                timeout=10
            )
            response.raise_for_status()
            data = response.json()
            return data.get("data", {}).get("submissionDetails")
        except Exception as e:
            logger.error(f"Failed to fetch submission details for ID {submission_id}: {e}")
            return None

    def get_question_data(self, title_slug):
        query = """
        query questionData($titleSlug: String!) {
            question(titleSlug: $titleSlug) {
                questionId
                questionFrontendId
                title
                titleSlug
                difficulty
                topicTags {
                    name
                }
            }
        }
        """
        variables = {"titleSlug": title_slug}
        
        try:
            response = self.session.post(
                self.GRAPHQL_URL,
                headers=self.headers,
                json={"query": query, "variables": variables},
                timeout=10
            )
            response.raise_for_status()
            data = response.json()
            return data.get("data", {}).get("question")
        except Exception as e:
            logger.error(f"Failed to fetch question data for slug {title_slug}: {e}")
            return None

leetcode_api = LeetCodeAPI()
