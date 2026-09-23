class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int y=sum-x;
        int left=0;
        sum=0;
        int size=-1;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(left<nums.size()&&sum>y){
                sum-=nums[left];
                left++;
            }
            if(sum==y)
            size=max(size,right-left+1);
        }
        if(size==-1) return -1;
        return nums.size()-size;
    }
};