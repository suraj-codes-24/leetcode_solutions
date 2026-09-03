class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_odd = INT_MAX;
        int n = nums1.size();

        // Find minimum ODD number
        for(int i = 0; i < n; i++) {
            if(nums1[i] % 2 != 0) {
                min_odd = min(nums1[i], min_odd);
            }
        }

        // No odd number -> all are even
        if(min_odd == INT_MAX)
            return true;

        // Every even number must be >= minimum odd
        for(auto x : nums1) {
            if(x % 2 == 0) {
                if(x < min_odd)
                    return false;
            }
        }

        return true;
    }
};