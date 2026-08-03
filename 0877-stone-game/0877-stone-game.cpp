class Solution {
public:
    int dp[501][501];
    int solve(vector<int>& piles ,int i,int j){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int x=piles[i]-solve(piles,i+1,j);
        int y=piles[j]-solve(piles,i,j-1);
        return dp[i][j]=max(x,y);

    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int n=piles.size();
        int x=solve(piles,0,n-1);
        if(x) return true;
        else
        return false;
    }
};