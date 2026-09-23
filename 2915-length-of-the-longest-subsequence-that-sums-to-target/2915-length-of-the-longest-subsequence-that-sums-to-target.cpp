// class Solution1 {
// public:
//     int dp[1001][1001];
//     int solve(vector<int>& nums,int target,int i){
//         if(target==0) return 0;
//         if(i>=nums.size()||target<0) return -1;
//         if(dp[i][target]!=-1) return dp[i][target];
//         int take=-1,skip=-1;

//         if(nums[i]<=target){
//             int x=solve(nums,target-nums[i],i+1);
//             if(x!=-1)
//             take=1+x;
//         }
//         skip=solve(nums,target,i+1);
//         return dp[i][target]=max(take,skip);
//     }
//     int lengthOfLongestSubsequence(vector<int>& nums, int target) {
//         memset(dp,-1,sizeof(dp));
//         return solve(nums,target,0);
//     }
// };
class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        for(int i = 0; i <= n; i++)
            dp[i][0] = 0;
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<=target;j++){
                int take=-1;
                if(nums[i]<=j){
                    if(dp[i+1][j-nums[i]]!=-1){
                        take=1+dp[i+1][j-nums[i]];
                    }
                }
                int skip=dp[i+1][j];
                dp[i][j]=max(take,skip);
            }
        }
        return dp[0][target];
    }
};