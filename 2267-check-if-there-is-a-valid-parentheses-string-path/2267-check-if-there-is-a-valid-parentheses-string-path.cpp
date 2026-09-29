class Solution {
public:
    int row,col;
    int dp[101][101][101+101];
    bool solve(vector<vector<char>>& grid,int i,int j,int count){
        if(count<0) return false;
        if(i>=row||j>=col){
            return false;
        }
        if(i==row-1&&j==col-1){
            if(grid[i][j]==')'){
                count--;
            }
            else{
                count++;
            }
            return !count;
        }
        if(dp[i][j][count]!=-1) return dp[i][j][count];
        bool right,down;
        if(grid[i][j]=='('){
            down=solve(grid,i+1,j,count+1);
            right=solve(grid,i,j+1,count+1);
        }
        else{
            down=solve(grid,i+1,j,count-1);
            right=solve(grid,i,j+1,count-1);
        }
        return dp[i][j][count]=right||down;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        row=grid.size();
        col=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,0);
    }
};