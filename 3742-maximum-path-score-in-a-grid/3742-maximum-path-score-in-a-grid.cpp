class Solution {
public:
    int row, col;
    vector<vector<vector<int>>> dp;

    int solve(vector<vector<int>>& grid, int i, int j, int k) {
        if(i >= row || j >= col || k < 0)
            return -1e9;

        int curr;
        if(grid[i][j] == 0)
            curr = 0;
        else
            curr = 1;

        if(i == row-1 && j == col-1) {
            if(k >= curr)
                return grid[i][j];

            return -1e9;
        }

        if(dp[i][j][k] != -1)
            return dp[i][j][k];

        int down = grid[i][j] + solve(grid, i+1, j, k-curr);
        int right = grid[i][j] + solve(grid, i, j+1, k-curr);

        return dp[i][j][k] = max(down, right);
    }

    int maxPathScore(vector<vector<int>>& grid, int k) {
        row = grid.size();
        col = grid[0].size();

        dp = vector<vector<vector<int>>>(
            row,
            vector<vector<int>>(col, vector<int>(k + 1, -1))
        );

        int x = solve(grid, 0, 0, k);

        if(x < 0)
            return -1;

        return x;
    }
};