class Solution {
public:
    int row, col;
    vector<vector<int>> dp;

    int solve(vector<vector<int>>& matrix, int i, int j) {
        if(i >= row || j >= col)
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int right = solve(matrix, i, j + 1);
        int down = solve(matrix, i + 1, j);
        int diag = solve(matrix, i + 1, j + 1);

        if(matrix[i][j] == 1) {
            dp[i][j] = 1 + min({right, down, diag});
        }
        else {
            dp[i][j] = 0;
        }

        return dp[i][j];
    }

    int countSquares(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = matrix[0].size();

        dp.assign(row, vector<int>(col, -1));

        solve(matrix, 0, 0);

        int ans = 0;

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                ans += dp[i][j];
            }
        }

        return ans;
    }
};