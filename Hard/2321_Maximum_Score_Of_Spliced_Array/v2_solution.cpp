class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int sum1 = 0, sum2 = 0;
        
        int max_gain1 = 0; // Max gain to add to sum1
        int curr1 = 0;
        
        int max_gain2 = 0; // Max gain to add to sum2
        int curr2 = 0;
        
        for(int i = 0; i < n; i++){
            // Base sums
            sum1 += nums1[i];
            sum2 += nums2[i];
            
            // 1. Favoring nums1 (swapping in elements from nums2)
            int diff1 = nums2[i] - nums1[i];
            curr1 += diff1;
            max_gain1 = max(max_gain1, curr1);
            if(curr1 < 0) {
                curr1 = 0;
            }
            //2. Favouring nums2
            int diff2=nums1[i]-nums2[i];
            curr2+=diff2;
            max_gain2=max(max_gain2,curr2);
            if(curr2<0)curr2=0;
            
        }   
        
        return max(sum1+max_gain1,sum2+max_gain2);
    }
};