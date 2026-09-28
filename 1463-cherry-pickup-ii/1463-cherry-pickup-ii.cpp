class Solution1 {
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
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int row,col;
        row=grid.size();
        col=grid[0].size();
        vector<vector<vector<int>>>dp(row+1,vector<vector<int>>(col+1,vector<int>(col+1)));

        for(int i=row-1;i>=0;i--){
            for(int c1=0;c1<col;c1++){
                for(int c2=col-1;c2>=0;c2--){
                    int curr;
                    if(c1==c2){
                        curr=grid[i][c1];
                    }
                    else{
                        curr=grid[i][c1]+grid[i][c2];
                    }
                    int ll = (c1-1>=0 && c2-1>=0) ? curr+dp[i+1][c1-1][c2-1] : 0;
                    int lr = (c1-1>=0 && c2+1<col) ? curr+dp[i+1][c1-1][c2+1] : 0;
                    int ld = (c1-1>=0) ? curr+dp[i+1][c1-1][c2] : 0;
                    int rr = (c1+1<col && c2+1<col) ? curr+dp[i+1][c1+1][c2+1] : 0;
                    int rl = (c1+1<col && c2-1>=0) ? curr+dp[i+1][c1+1][c2-1] : 0;
                    int rd = (c1+1<col) ? curr+dp[i+1][c1+1][c2] : 0;
                    int dd = curr+dp[i+1][c1][c2];
                    int dl = (c2-1>=0) ? curr+dp[i+1][c1][c2-1] : 0;
                    int dr = (c2+1<col) ? curr+dp[i+1][c1][c2+1] : 0;
                    dp[i][c1][c2]=max({ll,lr,ld,rr,rl,rd,dd,dl,dr});

                }
            }
        }
        return dp[0][0][col-1];
    }
};