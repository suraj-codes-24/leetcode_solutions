class Solution {
public:
    int dp[21][21];
    int solve(vector<int> &nums,int i,int j){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int a=nums[i]-solve(nums,i+1,j);
        int b=nums[j]-solve(nums,i,j-1);

        return dp[i][j]=max(a,b);
        
    }                
    bool predictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int left=0;
        int right=nums.size()-1;
        return solve(nums,left,right)>=0;
    }
};