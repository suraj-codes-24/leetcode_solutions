class Solution {
public:
    int row,col;
    int dp[71][71][71];
    int solve(vector<vector<int>>& grid,int i, int c1,int c2){
        if(i>=row||c1>=col||c2>=col||c1<0||c2<0) return 0;
        if(dp[i][c1][c2]!=-1) return dp[i][c1][c2];
        int curr;
        if(c1==c2){
            curr=grid[i][c1];
        }
        else{
            curr=grid[i][c1]+grid[i][c2];
        }
        int ll=curr+solve(grid,i+1,c1-1,c2-1);
        int lr=curr+solve(grid,i+1,c1-1,c2+1);
        int ld=curr+solve(grid,i+1,c1-1,c2);
        int rr=curr+solve(grid,i+1,c1+1,c2+1);
        int rl=curr+solve(grid,i+1,c1+1,c2-1);
        int rd=curr+solve(grid,i+1,c1+1,c2);
        int dd=curr+solve(grid,i+1,c1,c2);
        int dl=curr+solve(grid,i+1,c1,c2-1);
        int dr=curr+solve(grid,i+1,c1,c2+1);
        return dp[i][c1][c2]=max({ll,lr,ld,rr,rl,rd,dd,dl,dr});
    }
    int cherryPickup(vector<vector<int>>& grid) {
        row=grid.size();
        col=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,col-1);
    }
};