class Solution {
public:
    int dp[1001][1001][2];

    int solve(vector<int>& nums, int prev, int idx, bool lookpositive) {
        if (idx >= nums.size())
            return 0;

        int take = 0, skip = 0;

        if (prev != -1 && dp[idx][prev][lookpositive] != -1)
            return dp[idx][prev][lookpositive];

        // Taking the first element
        if (prev == -1) {
            take = 1 + solve(nums, idx, idx + 1, lookpositive);
        }
        // Next difference should be positive
        else if (lookpositive && nums[idx] > nums[prev]) {
            take = 1 + solve(nums, idx, idx + 1, false);
        }
        // Next difference should be negative
        else if (!lookpositive && nums[idx] < nums[prev]) {
            take = 1 + solve(nums, idx, idx + 1, true);
        }

        // Skip current element
        skip = solve(nums, prev, idx + 1, lookpositive);

        if (prev != -1)
            dp[idx][prev][lookpositive] = max(take, skip);

        return max(take, skip);
    }

    int wiggleMaxLength(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));

        return max(
            solve(nums, -1, 0, true),
            solve(nums, -1, 0, false)
        );
    }
};