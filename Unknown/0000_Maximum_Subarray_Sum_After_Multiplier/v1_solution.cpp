class Solution {
public:
    long long solve(vector<int>& nums, int k,bool domul){
        long long dp0=0;
        long long dp1=-1e15;
        long long dp2=-1e15;
        long long ans=-1e15;
        for(auto x:nums){
           long long val = domul?1LL*x*k:x/k;
            long long o0=dp0;
            long long o1=dp1;
            long long o2=dp2;
            dp0=max(1LL*x,o0+x);
            dp1 = max({val,o0+val,o1+val});
            dp2 = max(o1+x,o2+x);
            ans = max({ans,dp0,dp1,dp2});
            
        }
        return ans;
    }
    long long maxSubarraySum(vector<int>& nums, int k) {
        auto mavireltho = nums;
        return max(solve(nums,k,true),solve(nums,k,false));
    }
};