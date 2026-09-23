class Solution {
public:
    int dp[100001][26];
    int solve(string &s,int &k,int prev,int i){
        if(i>=s.size()) return 0;
        if(prev!=-1&&dp[i][prev]!=-1) return dp[i][prev];
        int take=0,skip=0;
        if(prev==-1||abs(s[i]-'a'-prev)<=k){
            take=1+solve(s,k,s[i]-'a',i+1);
        }
        skip=solve(s,k,prev,i+1);
        if(prev!=-1){
            dp[i][prev]=max(take,skip);
        }
        return max(take,skip);
    }
    int longestIdealString(string s, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(s,k,-1,0);
    }
};