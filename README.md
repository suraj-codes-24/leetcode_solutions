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
| [0189-rotate-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0189-rotate-array) |
| [0373-find-k-pairs-with-smallest-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0373-find-k-pairs-with-smallest-sums) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [0447-number-of-boomerangs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0447-number-of-boomerangs) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1046-last-stone-weight](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1046-last-stone-weight) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [1331-rank-transform-of-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1331-rank-transform-of-an-array) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1642-furthest-building-you-can-reach](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1642-furthest-building-you-can-reach) |
| [1834-single-threaded-cpu](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1834-single-threaded-cpu) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [2530-maximal-score-after-applying-k-operations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2530-maximal-score-after-applying-k-operations) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3066-minimum-operations-to-exceed-threshold-value-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3066-minimum-operations-to-exceed-threshold-value-ii) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Dynamic Programming
|  |
| ------- |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Matrix
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
## Sorting
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
| [1331-rank-transform-of-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1331-rank-transform-of-an-array) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1834-single-threaded-cpu](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1834-single-threaded-cpu) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Depth-First Search
|  |
| ------- |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0797-all-paths-from-source-to-target](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0797-all-paths-from-source-to-target) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [2685-count-the-number-of-complete-components](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2685-count-the-number-of-complete-components) |
## Breadth-First Search
|  |
| ------- |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [0797-all-paths-from-source-to-target](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0797-all-paths-from-source-to-target) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [2685-count-the-number-of-complete-components](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2685-count-the-number-of-complete-components) |
## Union-Find
|  |
| ------- |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [2685-count-the-number-of-complete-components](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2685-count-the-number-of-complete-components) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
## String
|  |
| ------- |
| [0006-zigzag-conversion](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0006-zigzag-conversion) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [1405-longest-happy-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1405-longest-happy-string) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3499-maximize-active-section-with-trade-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3499-maximize-active-section-with-trade-i) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3756-concatenate-non-zero-digits-and-multiply-by-sum-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3756-concatenate-non-zero-digits-and-multiply-by-sum-ii) |
## Two Pointers
|  |
| ------- |
| [0189-rotate-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0189-rotate-array) |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Design
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
## Heap (Priority Queue)
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0373-find-k-pairs-with-smallest-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0373-find-k-pairs-with-smallest-sums) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1046-last-stone-weight](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1046-last-stone-weight) |
| [1405-longest-happy-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1405-longest-happy-string) |
| [1642-furthest-building-you-can-reach](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1642-furthest-building-you-can-reach) |
| [1834-single-threaded-cpu](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1834-single-threaded-cpu) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [2530-maximal-score-after-applying-k-operations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2530-maximal-score-after-applying-k-operations) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3066-minimum-operations-to-exceed-threshold-value-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3066-minimum-operations-to-exceed-threshold-value-ii) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
## Data Stream
|  |
| ------- |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
## Math
|  |
| ------- |
| [0189-rotate-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0189-rotate-array) |
| [0447-number-of-boomerangs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0447-number-of-boomerangs) |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3754-concatenate-non-zero-digits-and-multiply-by-sum-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3754-concatenate-non-zero-digits-and-multiply-by-sum-i) |
| [3756-concatenate-non-zero-digits-and-multiply-by-sum-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3756-concatenate-non-zero-digits-and-multiply-by-sum-ii) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Hash Table
|  |
| ------- |
| [0447-number-of-boomerangs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0447-number-of-boomerangs) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [1331-rank-transform-of-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1331-rank-transform-of-an-array) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
## Sliding Window
|  |
| ------- |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
## Bucket Sort
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
## Counting
|  |
| ------- |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
## Greedy
|  |
| ------- |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [1405-longest-happy-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1405-longest-happy-string) |
| [1642-furthest-building-you-can-reach](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1642-furthest-building-you-can-reach) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
| [2530-maximal-score-after-applying-k-operations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2530-maximal-score-after-applying-k-operations) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Tree
|  |
| ------- |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
## Binary Search Tree
|  |
| ------- |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Binary Tree
|  |
| ------- |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
## Backtracking
|  |
| ------- |
| [0797-all-paths-from-source-to-target](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0797-all-paths-from-source-to-target) |
## Graph Theory
|  |
| ------- |
| [0797-all-paths-from-source-to-target](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0797-all-paths-from-source-to-target) |
| [2685-count-the-number-of-complete-components](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2685-count-the-number-of-complete-components) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Prefix Sum
|  |
| ------- |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3756-concatenate-non-zero-digits-and-multiply-by-sum-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3756-concatenate-non-zero-digits-and-multiply-by-sum-ii) |
## Trie
|  |
| ------- |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
## Divide and Conquer
|  |
| ------- |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
## Geometry
|  |
| ------- |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
## Quickselect
|  |
| ------- |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
## Bit Manipulation
|  |
| ------- |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Simulation
|  |
| ------- |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3066-minimum-operations-to-exceed-threshold-value-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3066-minimum-operations-to-exceed-threshold-value-ii) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Stack
|  |
| ------- |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
## Enumeration
|  |
| ------- |
| [1291-sequential-digits](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1291-sequential-digits) |
| [3499-maximize-active-section-with-trade-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3499-maximize-active-section-with-trade-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
## Number Theory
|  |
| ------- |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Combinatorics
|  |
| ------- |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
## Monotonic Stack
|  |
| ------- |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
## Database
|  |
| ------- |
| [0197-rising-temperature](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0197-rising-temperature) |
| [0570-managers-with-at-least-5-direct-reports](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0570-managers-with-at-least-5-direct-reports) |
| [0584-find-customer-referee](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0584-find-customer-referee) |
| [0595-big-countries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0595-big-countries) |
| [0620-not-boring-movies](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0620-not-boring-movies) |
| [1068-product-sales-analysis-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1068-product-sales-analysis-i) |
| [1075-project-employees-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1075-project-employees-i) |
| [1148-article-views-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1148-article-views-i) |
| [1211-queries-quality-and-percentage](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1211-queries-quality-and-percentage) |
| [1251-average-selling-price](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1251-average-selling-price) |
| [1280-students-and-examinations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1280-students-and-examinations) |
| [1378-replace-employee-id-with-the-unique-identifier](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1378-replace-employee-id-with-the-unique-identifier) |
| [1581-customer-who-visited-but-did-not-make-any-transactions](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1581-customer-who-visited-but-did-not-make-any-transactions) |
| [1633-percentage-of-users-attended-a-contest](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1633-percentage-of-users-attended-a-contest) |
| [1661-average-time-of-process-per-machine](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1661-average-time-of-process-per-machine) |
| [1683-invalid-tweets](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1683-invalid-tweets) |
| [1757-recyclable-and-low-fat-products](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1757-recyclable-and-low-fat-products) |
| [1934-confirmation-rate](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1934-confirmation-rate) |
## Segment Tree
|  |
| ------- |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
<!---LeetCode Topics End-->