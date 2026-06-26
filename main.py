import time
from config import config
from logger import logger
from leetcode_api import leetcode_api
from git_manager import git_manager
from submission_handler import submission_handler

def main():
    logger.info("Starting LeetSync...")

    if not config.is_valid():
        logger.error("Configuration is invalid. Please set LEETCODE_SESSION and LEETCODE_CSRF_TOKEN in your .env file.")
        return

    # Ensure git repo is initialized
    git_manager.init_repo()

    logger.info(f"Monitoring LeetCode submissions every {config.interval_seconds} seconds.")

    consecutive_failures = 0

    while True:
        try:
            logger.info("Checking for new accepted submissions...")
            # We already filter by status: 10 (Accepted) in the GraphQL query
            submissions = leetcode_api.get_recent_submissions(limit=20)
            
            if submissions is None:
                raise Exception("Failed to fetch submissions. Check your internet connection and LeetCode cookies.")
                
            # Process oldest first to maintain correct chronological order
            for submission in reversed(submissions):
                # Ensure it's accepted (in case GraphQL filtering fails)
                if submission.get("statusDisplay") == "Accepted":
                    submission_handler.process_submission(submission)
            
            consecutive_failures = 0

        except Exception as e:
            logger.error(f"Error in main loop: {e}")
            consecutive_failures += 1
            if consecutive_failures >= config.max_retries:
                logger.error("Max retries reached. Exiting.")
                break
                
        logger.info(f"Sleeping for {config.interval_seconds} seconds...")
        time.sleep(config.interval_seconds)

if __name__ == "__main__":
    main()
