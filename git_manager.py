import subprocess
import os
import time
from config import config
from logger import logger

class GitManager:
    def __init__(self):
        self.repo_path = config.repo_path
        self.branch = config.branch

    def run_command(self, cmd, check=True):
        try:
            result = subprocess.run(
                cmd,
                cwd=self.repo_path,
                check=check,
                text=True,
                capture_output=True
            )
            return True, result.stdout
        except subprocess.CalledProcessError as e:
            logger.error(f"Command '{' '.join(cmd)}' failed with error:\n{e.stderr}")
            return False, e.stderr

    def init_repo(self):
        if not os.path.exists(os.path.join(self.repo_path, ".git")):
            logger.info("Initializing new git repository...")
            self.run_command(["git", "init"])
            # Try to switch to default branch
            self.run_command(["git", "checkout", "-b", self.branch], check=False)

    def add_commit_push(self, commit_message):
        logger.info("Staging changes...")
        success, _ = self.run_command(["git", "add", "."])
        if not success:
            return False

        # Check if there are any changes to commit
        success, status = self.run_command(["git", "status", "--porcelain"])
        if not status.strip():
            logger.info("No changes to commit.")
            return True

        logger.info(f"Committing with message: '{commit_message}'")
        success, _ = self.run_command(["git", "commit", "-m", commit_message])
        if not success:
            return False

        self.push()
        return True

    def push(self):
        logger.info("Pushing to remote...")
        success, _ = self.run_command(["git", "push", "origin", self.branch])
        if not success:
            logger.warning("Push failed. The commit is saved locally and will be pushed later.")
            return False
        
        logger.info("Successfully pushed to remote.")
        return True

git_manager = GitManager()
