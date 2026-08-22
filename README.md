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
| [0004-median-of-two-sorted-arrays](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0004-median-of-two-sorted-arrays) |
| [0079-word-search](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0079-word-search) |
| [0189-rotate-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0189-rotate-array) |
| [0373-find-k-pairs-with-smallest-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0373-find-k-pairs-with-smallest-sums) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [0447-number-of-boomerangs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0447-number-of-boomerangs) |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [0486-predict-the-winner](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0486-predict-the-winner) |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0605-can-place-flowers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0605-can-place-flowers) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0628-maximum-product-of-three-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1046-last-stone-weight](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1046-last-stone-weight) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [1331-rank-transform-of-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1331-rank-transform-of-an-array) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
| [1386-cinema-seat-allocation](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1386-cinema-seat-allocation) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1431-kids-with-the-greatest-number-of-candies](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1431-kids-with-the-greatest-number-of-candies) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1563-stone-game-v](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1563-stone-game-v) |
| [1642-furthest-building-you-can-reach](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1642-furthest-building-you-can-reach) |
| [1700-number-of-students-unable-to-eat-lunch](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1700-number-of-students-unable-to-eat-lunch) |
| [1834-single-threaded-cpu](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1834-single-threaded-cpu) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
| [2213-longest-substring-of-one-repeating-character](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2213-longest-substring-of-one-repeating-character) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [2530-maximal-score-after-applying-k-operations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2530-maximal-score-after-applying-k-operations) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3066-minimum-operations-to-exceed-threshold-value-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3066-minimum-operations-to-exceed-threshold-value-ii) |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3069-distribute-elements-into-two-arrays-i) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3702-longest-subsequence-with-non-zero-bitwise-xor](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3702-longest-subsequence-with-non-zero-bitwise-xor) |
| [3731-find-missing-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3731-find-missing-elements) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Dynamic Programming
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0486-predict-the-winner) |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1563-stone-game-v) |
| [3302-find-the-lexicographically-smallest-valid-sequence](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3302-find-the-lexicographically-smallest-valid-sequence) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Matrix
|  |
| ------- |
| [0079-word-search](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0079-word-search) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [1301-number-of-paths-with-max-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1301-number-of-paths-with-max-score) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
## Sorting
|  |
| ------- |
| [0147-insertion-sort-list](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0147-insertion-sort-list) |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0628-maximum-product-of-three-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1288-remove-covered-intervals](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1288-remove-covered-intervals) |
| [1331-rank-transform-of-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1331-rank-transform-of-an-array) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [1834-single-threaded-cpu](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1834-single-threaded-cpu) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3517-smallest-palindromic-rearrangement-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3536-maximum-product-of-two-digits](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3536-maximum-product-of-two-digits) |
| [3731-find-missing-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3731-find-missing-elements) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Depth-First Search
|  |
| ------- |
| [0079-word-search](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0079-word-search) |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0617-merge-two-binary-trees](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0617-merge-two-binary-trees) |
| [0797-all-paths-from-source-to-target](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0797-all-paths-from-source-to-target) |
| [1020-number-of-enclaves](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1020-number-of-enclaves) |
| [2685-count-the-number-of-complete-components](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2685-count-the-number-of-complete-components) |
## Breadth-First Search
|  |
| ------- |
| [0407-trapping-rain-water-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0407-trapping-rain-water-ii) |
| [0617-merge-two-binary-trees](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0617-merge-two-binary-trees) |
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
| [0079-word-search](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0079-word-search) |
| [0443-string-compression](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0443-string-compression) |
| [0451-sort-characters-by-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0451-sort-characters-by-frequency) |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [0692-top-k-frequent-words](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0692-top-k-frequent-words) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [1405-longest-happy-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1405-longest-happy-string) |
| [2213-longest-substring-of-one-repeating-character](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2213-longest-substring-of-one-repeating-character) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3302-find-the-lexicographically-smallest-valid-sequence](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3302-find-the-lexicographically-smallest-valid-sequence) |
| [3499-maximize-active-section-with-trade-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3499-maximize-active-section-with-trade-i) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3517-smallest-palindromic-rearrangement-i) |
| [3518-smallest-palindromic-rearrangement-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3518-smallest-palindromic-rearrangement-ii) |
| [3756-concatenate-non-zero-digits-and-multiply-by-sum-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3756-concatenate-non-zero-digits-and-multiply-by-sum-ii) |
## Two Pointers
|  |
| ------- |
| [0189-rotate-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0189-rotate-array) |
| [0295-find-median-from-data-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0295-find-median-from-data-stream) |
| [0443-string-compression](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0443-string-compression) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [3302-find-the-lexicographically-smallest-valid-sequence](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3302-find-the-lexicographically-smallest-valid-sequence) |
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
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
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
| [0486-predict-the-winner](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0486-predict-the-winner) |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [0628-maximum-product-of-three-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [0973-k-closest-points-to-origin](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0973-k-closest-points-to-origin) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1352-product-of-the-last-k-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1352-product-of-the-last-k-numbers) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1563-stone-game-v) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
| [2928-distribute-candies-among-children-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2928-distribute-candies-among-children-i) |
| [2929-distribute-candies-among-children-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2929-distribute-candies-among-children-ii) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3345-smallest-divisible-digit-product-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3345-smallest-divisible-digit-product-i) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3518-smallest-palindromic-rearrangement-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3518-smallest-palindromic-rearrangement-ii) |
| [3536-maximum-product-of-two-digits](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3536-maximum-product-of-two-digits) |
| [3622-check-divisibility-by-digit-sum-and-product](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3622-check-divisibility-by-digit-sum-and-product) |
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
| [1386-cinema-seat-allocation](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1386-cinema-seat-allocation) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [2996-smallest-missing-integer-greater-than-sequential-prefix-sum](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2996-smallest-missing-integer-greater-than-sequential-prefix-sum) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3518-smallest-palindromic-rearrangement-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3518-smallest-palindromic-rearrangement-ii) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3731-find-missing-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3731-find-missing-elements) |
## Sliding Window
|  |
| ------- |
| [0480-sliding-window-median](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0480-sliding-window-median) |
| [2958-length-of-longest-subarray-with-at-most-k-frequency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2958-length-of-longest-subarray-with-at-most-k-frequency) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
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
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3518-smallest-palindromic-rearrangement-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3518-smallest-palindromic-rearrangement-ii) |
## Greedy
|  |
| ------- |
| [0502-ipo](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0502-ipo) |
| [0605-can-place-flowers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0605-can-place-flowers) |
| [0621-task-scheduler](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0621-task-scheduler) |
| [0767-reorganize-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0767-reorganize-string) |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [1386-cinema-seat-allocation](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1386-cinema-seat-allocation) |
| [1405-longest-happy-string](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1405-longest-happy-string) |
| [1642-furthest-building-you-can-reach](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1642-furthest-building-you-can-reach) |
| [1962-remove-stones-to-minimize-the-total](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1962-remove-stones-to-minimize-the-total) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
| [2530-maximal-score-after-applying-k-operations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2530-maximal-score-after-applying-k-operations) |
| [2542-maximum-subsequence-score](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2542-maximum-subsequence-score) |
| [3014-minimum-number-of-pushes-to-type-word-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3014-minimum-number-of-pushes-to-type-word-i) |
| [3016-minimum-number-of-pushes-to-type-word-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3016-minimum-number-of-pushes-to-type-word-ii) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
| [3302-find-the-lexicographically-smallest-valid-sequence](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3302-find-the-lexicographically-smallest-valid-sequence) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Tree
|  |
| ------- |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0450-delete-node-in-a-bst](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0450-delete-node-in-a-bst) |
| [0617-merge-two-binary-trees](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0617-merge-two-binary-trees) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
## Binary Search Tree
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0004-median-of-two-sorted-arrays) |
| [0378-kth-smallest-element-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0378-kth-smallest-element-in-a-sorted-matrix) |
| [0450-delete-node-in-a-bst](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0450-delete-node-in-a-bst) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
| [0786-k-th-smallest-prime-fraction](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0786-k-th-smallest-prime-fraction) |
| [1351-count-negative-numbers-in-a-sorted-matrix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1351-count-negative-numbers-in-a-sorted-matrix) |
| [1508-range-sum-of-sorted-subarray-sums](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1508-range-sum-of-sorted-subarray-sums) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
## Binary Tree
|  |
| ------- |
| [0437-path-sum-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0437-path-sum-iii) |
| [0450-delete-node-in-a-bst](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0450-delete-node-in-a-bst) |
| [0617-merge-two-binary-trees](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0617-merge-two-binary-trees) |
| [0703-kth-largest-element-in-a-stream](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0703-kth-largest-element-in-a-stream) |
## Backtracking
|  |
| ------- |
| [0079-word-search](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0079-word-search) |
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
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
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
| [0004-median-of-two-sorted-arrays](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0004-median-of-two-sorted-arrays) |
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
| [1386-cinema-seat-allocation](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1386-cinema-seat-allocation) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3513-number-of-unique-xor-triplets-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3513-number-of-unique-xor-triplets-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
| [3534-path-existence-queries-in-a-graph-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3534-path-existence-queries-in-a-graph-ii) |
| [3702-longest-subsequence-with-non-zero-bitwise-xor](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3702-longest-subsequence-with-non-zero-bitwise-xor) |
## Simulation
|  |
| ------- |
| [0537-complex-number-multiplication](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0537-complex-number-multiplication) |
| [1260-shift-2d-grid](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1260-shift-2d-grid) |
| [1700-number-of-students-unable-to-eat-lunch](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1700-number-of-students-unable-to-eat-lunch) |
| [2462-total-cost-to-hire-k-workers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2462-total-cost-to-hire-k-workers) |
| [2593-find-score-of-an-array-after-marking-all-elements](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2593-find-score-of-an-array-after-marking-all-elements) |
| [3066-minimum-operations-to-exceed-threshold-value-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3066-minimum-operations-to-exceed-threshold-value-ii) |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3069-distribute-elements-into-two-arrays-i) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Stack
|  |
| ------- |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
| [1700-number-of-students-unable-to-eat-lunch](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1700-number-of-students-unable-to-eat-lunch) |
| [3170-lexicographically-minimum-string-after-removing-stars](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3170-lexicographically-minimum-string-after-removing-stars) |
## Enumeration
|  |
| ------- |
| [1291-sequential-digits](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1291-sequential-digits) |
| [2928-distribute-candies-among-children-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2928-distribute-candies-among-children-i) |
| [2929-distribute-candies-among-children-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2929-distribute-candies-among-children-ii) |
| [3345-smallest-divisible-digit-product-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3345-smallest-divisible-digit-product-i) |
| [3499-maximize-active-section-with-trade-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3499-maximize-active-section-with-trade-i) |
| [3514-number-of-unique-xor-triplets-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3514-number-of-unique-xor-triplets-ii) |
## Number Theory
|  |
| ------- |
| [1979-find-greatest-common-divisor-of-array](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3336-find-the-number-of-subsequences-with-equal-gcd](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3336-find-the-number-of-subsequences-with-equal-gcd) |
| [3867-sum-of-gcd-of-formed-pairs](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3867-sum-of-gcd-of-formed-pairs) |
## Combinatorics
|  |
| ------- |
| [2928-distribute-candies-among-children-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2928-distribute-candies-among-children-i) |
| [2929-distribute-candies-among-children-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2929-distribute-candies-among-children-ii) |
| [3116-kth-smallest-amount-with-single-denomination-combination](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3116-kth-smallest-amount-with-single-denomination-combination) |
| [3312-sorted-gcd-pair-queries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3312-sorted-gcd-pair-queries) |
| [3518-smallest-palindromic-rearrangement-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3518-smallest-palindromic-rearrangement-ii) |
## Monotonic Stack
|  |
| ------- |
| [1081-smallest-subsequence-of-distinct-characters](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1081-smallest-subsequence-of-distinct-characters) |
## Database
|  |
| ------- |
| [0175-combine-two-tables](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0175-combine-two-tables) |
| [0176-second-highest-salary](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0176-second-highest-salary) |
| [0177-nth-highest-salary](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0177-nth-highest-salary) |
| [0178-rank-scores](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0178-rank-scores) |
| [0180-consecutive-numbers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0180-consecutive-numbers) |
| [0181-employees-earning-more-than-their-managers](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0181-employees-earning-more-than-their-managers) |
| [0182-duplicate-emails](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0182-duplicate-emails) |
| [0183-customers-who-never-order](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0183-customers-who-never-order) |
| [0184-department-highest-salary](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0184-department-highest-salary) |
| [0185-department-top-three-salaries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0185-department-top-three-salaries) |
| [0196-delete-duplicate-emails](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0196-delete-duplicate-emails) |
| [0197-rising-temperature](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0197-rising-temperature) |
| [0262-trips-and-users](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0262-trips-and-users) |
| [0511-game-play-analysis-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0511-game-play-analysis-i) |
| [0550-game-play-analysis-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0550-game-play-analysis-iv) |
| [0570-managers-with-at-least-5-direct-reports](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0570-managers-with-at-least-5-direct-reports) |
| [0584-find-customer-referee](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0584-find-customer-referee) |
| [0586-customer-placing-the-largest-number-of-orders](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0586-customer-placing-the-largest-number-of-orders) |
| [0595-big-countries](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0595-big-countries) |
| [0596-classes-with-at-least-5-students](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0596-classes-with-at-least-5-students) |
| [0602-friend-requests-ii-who-has-the-most-friends](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0602-friend-requests-ii-who-has-the-most-friends) |
| [0607-sales-person](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0607-sales-person) |
| [0610-triangle-judgement](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0610-triangle-judgement) |
| [0619-biggest-single-number](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0619-biggest-single-number) |
| [0620-not-boring-movies](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0620-not-boring-movies) |
| [0627-swap-sex-of-employees](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0627-swap-sex-of-employees) |
| [1045-customers-who-bought-all-products](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1045-customers-who-bought-all-products) |
| [1068-product-sales-analysis-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1068-product-sales-analysis-i) |
| [1070-product-sales-analysis-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1070-product-sales-analysis-iii) |
| [1075-project-employees-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1075-project-employees-i) |
| [1084-sales-analysis-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1084-sales-analysis-iii) |
| [1141-user-activity-for-the-past-30-days-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1141-user-activity-for-the-past-30-days-i) |
| [1148-article-views-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1148-article-views-i) |
| [1158-market-analysis-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1158-market-analysis-i) |
| [1174-immediate-food-delivery-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1174-immediate-food-delivery-ii) |
| [1193-monthly-transactions-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1193-monthly-transactions-i) |
| [1211-queries-quality-and-percentage](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1211-queries-quality-and-percentage) |
| [1251-average-selling-price](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1251-average-selling-price) |
| [1280-students-and-examinations](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1280-students-and-examinations) |
| [1321-restaurant-growth](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1321-restaurant-growth) |
| [1341-movie-rating](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1341-movie-rating) |
| [1378-replace-employee-id-with-the-unique-identifier](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1378-replace-employee-id-with-the-unique-identifier) |
| [1393-capital-gainloss](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1393-capital-gainloss) |
| [1484-group-sold-products-by-the-date](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1484-group-sold-products-by-the-date) |
| [1581-customer-who-visited-but-did-not-make-any-transactions](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1581-customer-who-visited-but-did-not-make-any-transactions) |
| [1633-percentage-of-users-attended-a-contest](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1633-percentage-of-users-attended-a-contest) |
| [1661-average-time-of-process-per-machine](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1661-average-time-of-process-per-machine) |
| [1683-invalid-tweets](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1683-invalid-tweets) |
| [1693-daily-leads-and-partners](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1693-daily-leads-and-partners) |
| [1731-the-number-of-employees-which-report-to-each-employee](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1731-the-number-of-employees-which-report-to-each-employee) |
| [1741-find-total-time-spent-by-each-employee](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1741-find-total-time-spent-by-each-employee) |
| [1757-recyclable-and-low-fat-products](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1757-recyclable-and-low-fat-products) |
| [1789-primary-department-for-each-employee](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1789-primary-department-for-each-employee) |
| [1890-the-latest-login-in-2020](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1890-the-latest-login-in-2020) |
| [1907-count-salary-categories](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1907-count-salary-categories) |
| [1934-confirmation-rate](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1934-confirmation-rate) |
| [1965-employees-with-missing-information](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1965-employees-with-missing-information) |
| [1978-employees-whose-manager-left-the-company](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1978-employees-whose-manager-left-the-company) |
| [2356-number-of-unique-subjects-taught-by-each-teacher](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2356-number-of-unique-subjects-taught-by-each-teacher) |
| [3220-odd-and-even-transactions](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3220-odd-and-even-transactions) |
| [3421-find-students-who-improved](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3421-find-students-who-improved) |
| [3497-analyze-subscription-conversion](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3497-analyze-subscription-conversion) |
| [3564-seasonal-sales-analysis](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3564-seasonal-sales-analysis) |
| [3570-find-books-with-no-available-copies](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3570-find-books-with-no-available-copies) |
| [3601-find-drivers-with-improved-fuel-efficiency](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3601-find-drivers-with-improved-fuel-efficiency) |
## Segment Tree
|  |
| ------- |
| [2213-longest-substring-of-one-repeating-character](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2213-longest-substring-of-one-repeating-character) |
| [3501-maximize-active-section-with-trade-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3501-maximize-active-section-with-trade-ii) |
## Counting Sort
|  |
| ------- |
| [3517-smallest-palindromic-rearrangement-i](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/3517-smallest-palindromic-rearrangement-i) |
## Queue
|  |
| ------- |
| [1700-number-of-students-unable-to-eat-lunch](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1700-number-of-students-unable-to-eat-lunch) |
## Linked List
|  |
| ------- |
| [0147-insertion-sort-list](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0147-insertion-sort-list) |
## Recursion
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0486-predict-the-winner) |
## Game Theory
|  |
| ------- |
| [0486-predict-the-winner](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0486-predict-the-winner) |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [1563-stone-game-v](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1563-stone-game-v) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
## Minimax
|  |
| ------- |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
## Zero-Sum Game
|  |
| ------- |
| [0877-stone-game](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/0877-stone-game) |
| [1140-stone-game-ii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1140-stone-game-ii) |
| [1406-stone-game-iii](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1406-stone-game-iii) |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
## Nim Game
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
| [2029-stone-game-ix](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2029-stone-game-ix) |
## Sprague–Grundy Theorem
|  |
| ------- |
| [1510-stone-game-iv](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/1510-stone-game-iv) |
## Ordered Set
|  |
| ------- |
| [2213-longest-substring-of-one-repeating-character](https://github.com/suraj-codes-24/leetcode_solutions/tree/master/2213-longest-substring-of-one-repeating-character) |
<!---LeetCode Topics End-->