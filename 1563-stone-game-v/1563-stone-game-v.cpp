class Solution {
public:
    vector<int> prefixSum;          // prefixSum[i] = sum of first i elements
    int dp[501][501];               // memoization table

    int solve(vector<int>& stoneValue, int start, int end) {

        // If only one stone remains, no split is possible
        if(start >= end)
            return 0;

        // Return already calculated result
        if(dp[start][end] != -1)
            return dp[start][end];

        int maxScore = 0;

        // Try every possible splitting point
        for(int mid = start; mid < end; mid++) {

            // Calculate left part sum: start -> mid
            int leftSum = prefixSum[mid + 1] - prefixSum[start];

            // Calculate right part sum: mid+1 -> end
            int rightSum = prefixSum[end + 1] - prefixSum[mid + 1];

            int currentScore = 0;

            // Right part has larger sum
            // We keep right part and remove left part
            if(rightSum > leftSum) {

                currentScore = leftSum + solve(stoneValue, start, mid);
            }

            // Left part has larger sum
            // We keep left part and remove right part
            else if(leftSum > rightSum) {

                currentScore = rightSum + solve(stoneValue, mid + 1, end);
            }

            // Both parts have equal sum
            // We can choose either side to maximize answer
            else {
                int chooseLeft=currentScore;
                int chooseRight=currentScore;
                
                chooseLeft = leftSum + solve(stoneValue, start, mid);

                chooseRight = rightSum + solve(stoneValue, mid + 1, end);

                currentScore = max(chooseLeft, chooseRight);
            }

            // Store the best score among all possible splits
            maxScore = max(maxScore, currentScore);
        }

        // Save answer for this range
        return dp[start][end] = maxScore;
    }


    int stoneGameV(vector<int>& stoneValue) {

        int n = stoneValue.size();

        // Initialize DP table with -1 (unvisited states)
        memset(dp, -1, sizeof(dp));


        // Build prefix sum array
        // prefixSum[i] stores sum of elements from index 0 to i-1
        prefixSum.resize(n + 1, 0);

        for(int i = 0; i < n; i++) {

            prefixSum[i + 1] = prefixSum[i] + stoneValue[i];
        }


        // Start solving for complete array
        return solve(stoneValue, 0, n - 1);
    }
};