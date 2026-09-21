class Solution {
public:
    int dp[101][10001];
    bool solve(string s, string t,int i, int j){
        if(i>=s.size()) return true;
        if(j>=t.size()) return false;

        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
           return dp[i][j]=solve(s,t,i+1,j+1);
        }
        else{
            return dp[i][j]=solve(s,t,i,j+1);
        }
    }
    bool isSubsequence(string s, string t) {
        memset(dp,-1,sizeof(dp));
        return solve(s,t,0,0);
    }
};