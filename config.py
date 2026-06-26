import os
import json
from dotenv import load_dotenv
from logger import logger

load_dotenv()

class Config:
    def __init__(self):
        self.leetcode_session = os.environ.get("LEETCODE_SESSION")
        self.leetcode_csrf_token = os.environ.get("LEETCODE_CSRF_TOKEN")
        
        self.repo_path = "."
        self.branch = "main"
        self.interval_seconds = 300
        self.max_retries = 5
        self.languages = {}

        self.load_config_json()

    def load_config_json(self):
        config_file = "config.json"
        if os.path.exists(config_file):
            try:
                with open(config_file, "r", encoding="utf-8") as f:
                    data = json.load(f)
                    
                    github_config = data.get("github", {})
                    self.repo_path = github_config.get("repository_path", self.repo_path)
                    self.branch = github_config.get("branch", self.branch)
                    
                    polling_config = data.get("polling", {})
                    self.interval_seconds = polling_config.get("interval_seconds", self.interval_seconds)
                    self.max_retries = polling_config.get("max_retries_on_failure", self.max_retries)
                    
                    self.languages = data.get("languages", {})
            except Exception as e:
                logger.error(f"Error loading config.json: {e}")
        else:
            logger.warning(f"{config_file} not found. Using default configurations.")

    def is_valid(self):
        if not self.leetcode_session or not self.leetcode_csrf_token:
            return False
        return True

config = Config()
