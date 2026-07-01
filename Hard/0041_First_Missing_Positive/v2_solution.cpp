class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0;

        // skip all non-positive numbers
        while (i < n && nums[i] <= 0) i++;

        // if no positive number exists
        if (i == n) return 1;

        // if first positive is not 1
        if (nums[i] != 1) return 1;

        // scan through positives
        for (; i < n - 1; i++) {
            // skip duplicates
            if (nums[i] == nums[i + 1]) continue;

            if (nums[i + 1] - nums[i] > 1)
                return nums[i] + 1;
        }

        return nums[n - 1] + 1;
    }
};