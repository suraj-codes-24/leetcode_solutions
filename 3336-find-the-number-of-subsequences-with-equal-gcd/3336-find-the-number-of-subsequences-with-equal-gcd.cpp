class Solution {
public:
int dp[201][201][201];
static const int MOD=1e9+7;
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
}   
    int solve(vector<int>&nums,int i,int first,int second){
        if(i==nums.size()){
           bool both_nonempty=first!=0&&second!=0;
           bool equal=first==second;
           if(both_nonempty&&equal)return 1;
           return 0;

        }
        if(dp[i][first][second]!=-1)return dp[i][first][second];
        int skip=(solve(nums,i+1,first,second))%MOD;
        int seq1=(solve(nums,i+1,gcd(first,nums[i]),second))%MOD;
        int seq2=(solve(nums,i+1,first,gcd(second,nums[i])))%MOD;
        long long ans=skip;
        ans=(ans+seq1)%MOD;
        ans=(ans+seq2)%MOD;
        return dp[i][first][second]=ans;
    }
    int subsequencePairCount(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,0,0);
        
    }
};