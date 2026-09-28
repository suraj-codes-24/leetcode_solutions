class Solution {
public:
    int row,col;
    vector<vector<int>>count;
    vector<vector<int>>dp;
    int solve(vector<vector<int>>& matrix,int i, int j){
        if(i>=row||j>=col) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=solve(matrix,i,j+1);
        int down=solve(matrix,i+1,j);
        int diag=solve(matrix,i+1,j+1);
        int side=0;
        if(matrix[i][j]==1){
            side=1+min({right,down,diag});
        }
        else{
            side=0;
        }
        count[i][j]=side;
        return dp[i][j]=side;

    }
    int countSquares(vector<vector<int>>& matrix) {
        row=matrix.size();
        col=matrix[0].size();
        dp.assign(row,vector<int>(col,-1));
        count.resize(row,vector<int>(col,0));
        solve(matrix,0,0);
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans+=count[i][j];
            }
        }
        return ans;
    }
};