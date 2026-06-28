class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(k==0)break;
            long long curr;
            if(mul>0){
            curr=1LL*mul*nums[i];
            mul--;
            }
            else{
                curr=nums[i];
            }
            sum+=curr;
            k--;
        }
        return sum;
             
    }
};