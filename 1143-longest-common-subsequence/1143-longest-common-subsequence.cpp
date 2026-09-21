class Solution1 {
    //memz
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
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return solve(text1,text2,0,0);
        
    }
};
class Solution {
    //bottom up
public:
    
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int ans=0;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(text1[i]==text2[j]){
                    dp[i][j]=1+dp[i+1][j+1];
                }
                else{
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
                }
                ans=max(dp[i][j],ans);
            }
        }
        return ans;
        
    }
};