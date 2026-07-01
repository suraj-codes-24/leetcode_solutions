class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0)break;
        }
        if(i==nums.size())return 1;
        int st=nums[i];
        if(st!=1)return 1;
        i++;
        for(;i<nums.size();i++){
            if(nums[i]-nums[i-1]>1)return nums[i-1]+1;
        }
        return nums[i-1]+1;
         
        
    }
};