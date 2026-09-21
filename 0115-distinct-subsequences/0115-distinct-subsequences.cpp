class Solution {
public:
    int dp[1001][1001];
    int solve(string &s,string &t,int i,int j){
        if(j>=t.size())return 1;
        if(i>=s.size())return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            int take=solve(s,t,i+1,j+1);
            int skip=solve(s,t,i+1,j);
            return dp[i][j]=take+skip;
        }
        else{
            int skip=solve(s,t,i+1,j);
            return dp[i][j]=skip;
        }
    }
    int numDistinct(string s, string t) {
        memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0);
    }
};