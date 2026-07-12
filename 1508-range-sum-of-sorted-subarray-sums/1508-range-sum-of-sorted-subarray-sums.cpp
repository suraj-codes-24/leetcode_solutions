class Solution {
public:
    static const int MOD = 1e9 + 7;

    int rangeSum(vector<int>& nums, int n, int left, int right) {

        // {current subarray sum, end index}
        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<>
        > pq;

        // Initially insert all subarrays of length 1
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        long long ans = 0;

        // Extract the smallest subarray sums one by one
        for (int k = 1; k <= right; k++) {

            auto [sum, end] = pq.top();
            pq.pop();

            // Add to answer only if it lies in [left, right]
            if (k >= left) {
                ans = (ans + sum) % MOD;
            }

            // Extend the current subarray by one element
            if (end + 1 < n) {
                pq.push({sum + nums[end + 1], end + 1});
            }
        }

        return ans;
    }
};