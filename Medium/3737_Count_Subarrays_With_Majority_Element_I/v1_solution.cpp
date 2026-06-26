class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int tol_count=0;
            for(int j=i;j<n;j++){
               if(target==nums[j]){
                tol_count++;
               }
               if(2*tol_count>j-i+1)count++;

            }
        }
        return count;
    }
};