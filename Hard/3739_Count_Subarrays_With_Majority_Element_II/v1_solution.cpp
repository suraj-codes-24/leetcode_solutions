class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int cumsum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;

        long long res = 0;
        long long validleft = 0;

        for (int x : nums) {
            if (x == target) {
                validleft += mp[cumsum];
                cumsum++;
            } else {
                validleft -= mp[cumsum - 1];
                cumsum--;
            }

            res += validleft;
            mp[cumsum]++;
        }

        return res;
    }
};