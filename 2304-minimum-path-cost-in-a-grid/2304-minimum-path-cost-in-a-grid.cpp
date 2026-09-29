class Solution {
public:
    int row,col;
    int dp[51][51];
    int solve(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& moveCost){
        if(i==row-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int curr=INT_MAX;
        for(int x=0;x<col;x++){
            int nextbox=solve(grid,i+1,x,moveCost);
            curr=min(curr,nextbox+grid[i][j]+moveCost[grid[i][j]][x]);
        }
        return dp[i][j]=curr;
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        row=grid.size();
        col=grid[0].size();
        int minm=INT_MAX;
        memset(dp,-1,sizeof(dp));
        for(int j=0;j<col;j++){
            minm=min(minm,solve(grid,0,j,moveCost));
        }
        return minm;
    }
};