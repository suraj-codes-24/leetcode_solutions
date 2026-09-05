class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        int i=0;
        int j=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]==k){
                i++;
                j--;
                count++;
            }
            else if(nums[i]+nums[j]>k){
                j--;
            }
            else{
                i++;
            }

        }
        return count;
    }
};