class Solution {
public:
    int dp[1001][1001];
    int solve(string &text1, string &text2,int i,int j){
        if(i>=text1.size()||j>=text2.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(text1[i]==text2[j])
        {
           return dp[i][j]= 1+ solve(text1,text2,i+1,j+1);
        }
        else{
           return  dp[i][j]=max(solve(text1,text2,i+1,j),solve(text1,text2,i,j+1));
        }
    }
    int longestPalindromeSubseq(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());
        memset(dp,-1,sizeof(dp));
        return solve(s,rev,0,0);
    }
};