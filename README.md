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

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
## Dynamic Programming
|  |
| ------- |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
## Matrix
|  |
| ------- |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
## Sorting
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
## Depth-First Search
|  |
| ------- |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
## Breadth-First Search
|  |
| ------- |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
## Union-Find
|  |
| ------- |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
## String
|  |
| ------- |
| [0006-zigzag-conversion](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0006-zigzag-conversion) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
## Two Pointers
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
## Design
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
## Heap (Priority Queue)
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
## Data Stream
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
## Math
|  |
| ------- |
| [3754-concatenate-non-zero-digits-and-multiply-by-sum-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3754-concatenate-non-zero-digits-and-multiply-by-sum-i) |
## Hash Table
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
## Sliding Window
|  |
| ------- |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
## Bucket Sort
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
## Counting
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
## Greedy
|  |
| ------- |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
<!---LeetCode Topics End-->