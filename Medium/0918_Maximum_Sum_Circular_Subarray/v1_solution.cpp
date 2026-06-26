class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minn = INT_MAX;
        int maxx = INT_MIN; // We need this!
        
        int sum = 0;
        int curr_min = 0;
        int curr_max = 0;

        for(auto x : nums) {
            sum += x;
            
            // Calculate minimum contiguous subarray
            curr_min += x;
            minn = min(curr_min, minn);
            if(curr_min > 0) {
                curr_min = 0;
            }
            
            // Calculate maximum contiguous subarray
            curr_max += x;
            maxx = max(curr_max, maxx);
            if(curr_max < 0) {
                curr_max = 0;
            }
        }
        if(maxx<0)return maxx;
        return max(maxx,sum-minn);
        
    }
};