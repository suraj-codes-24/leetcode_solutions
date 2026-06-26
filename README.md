# LeetCode to GitHub Automator (LeetSync)

A complete background automation tool that monitors your LeetCode submissions and automatically pushes accepted ones to your GitHub repository.

## Features

- **Background Monitoring**: Automatically detects new accepted submissions on LeetCode.
- **Auto-Commit & Push**: Seamlessly commits and pushes to your configured GitHub repository.
- **Smart Structure**: Organizes solutions by `Difficulty/Problem_Name/`.
- **Versioning**: Preserves your submission history. Solving a problem multiple times creates `v1_solution.ext`, `v2_solution.ext`, etc.
- **Rich README**: Generates a beautiful `README.md` for each problem containing runtime, memory, percentiles, tags, and your submission history.
- **Error Handling**: Gracefully queues commits if your internet or GitHub is down, pushing them when connectivity is restored.

## Setup Instructions

1. **Install Dependencies**
   Open a terminal in this directory and run:
   ```bash
   pip install -r requirements.txt
   ```

2. **Configure LeetCode Authentication**
   - Copy `.env.example` to a new file named `.env`.
   - Log into [LeetCode](https://leetcode.com/) in your browser.
   - Open Developer Tools (F12) -> Application -> Cookies.
   - Find the values for `LEETCODE_SESSION` and `csrftoken`.
   - Paste them into your `.env` file:
     ```env
     LEETCODE_SESSION=your_actual_session_cookie
     LEETCODE_CSRF_TOKEN=your_actual_csrf_token
     ```

3. **Configure Settings (Optional)**
   Edit `config.json` to change the default language extensions or the polling interval (default is 300 seconds / 5 minutes).
   Make sure you link a remote to this repository if it isn't already connected to GitHub:
   ```bash
   git remote add origin https://github.com/yourusername/your-repo-name.git
   ```

4. **Run the Automator**
   ```bash
   python main.py
   ```
   Leave this terminal open, or configure it to run as a background service/scheduled task.

## Logs

Check the `logs/history.log` file for a detailed record of processed submissions and any errors.
