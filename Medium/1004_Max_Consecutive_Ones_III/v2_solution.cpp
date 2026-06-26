class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int l = 0;
        int zero_count = 0; 
        
        for(int r = 0; r < nums.size(); r++){
            // If we see a 0, increase our count
            if(nums[r] == 0) {
                zero_count++;
            }
            
            // If we have too many 0s, shrink the window from the left
            while(zero_count > k){
                if(nums[l] == 0) {
                    zero_count--;
                }
                l++;
            }
            
            // Update our max window size
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};