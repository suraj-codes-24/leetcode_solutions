class Solution {
public:
    int dp[1001][1001];

    int solve(vector<int>& nums, int prev, int curr) {

        if (curr >= nums.size())
            return 0;

        if (prev != -1 && dp[curr][prev] != -1)
            return dp[curr][prev];

        int take = 0;
        int skip = 0;

        // Take current
        if (prev == -1 || nums[curr] % nums[prev] == 0) {
            take = 1 + solve(nums, curr, curr + 1);
        }

        // Skip current
        skip = solve(nums, prev, curr + 1);

        int ans = max(take, skip);

        if (prev != -1)
            dp[curr][prev] = ans;

        return ans;
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        memset(dp, -1, sizeof(dp));

        // Find maximum size
        int size = solve(nums, -1, 0);

        vector<int> best;

        int prev = -1;
        int curr = 0;
        int remaining = size;

        while (curr < nums.size() && remaining > 0) {

            // Check whether we are allowed to take nums[curr]
            if (prev == -1 || nums[curr] % nums[prev] == 0) {

                int take = 1 + solve(nums, curr, curr + 1);

                // If taking this element can still give
                // the required maximum length
                if (take == remaining) {

                    best.push_back(nums[curr]);

                    prev = curr;

                    remaining--;
                }
            }

            curr++;
        }

        return best;
    }
};