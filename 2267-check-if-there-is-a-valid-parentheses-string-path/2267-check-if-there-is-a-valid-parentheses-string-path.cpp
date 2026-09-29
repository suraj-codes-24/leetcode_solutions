class Solution {
public:
    int row, col;
    int dp[101][101][201];

    bool solve(vector<vector<char>>& grid, int i, int j, int count) {
        if (count < 0) return false;

        if (i >= row || j >= col) return false;

        if (dp[i][j][count] != -1)
            return dp[i][j][count];

        if (i == row - 1 && j == col - 1) {
            if (grid[i][j] == ')')
                count--;
            else
                count++;

            return dp[i][j][count] = (count == 0);
        }
        int newc=count;
        if (grid[i][j] == '(')
            newc++;
        else
            newc--;

        bool down = solve(grid, i + 1, j, newc);
        bool right = solve(grid, i, j + 1, newc);

        return dp[i][j][count] = down || right;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        row = grid.size();
        col = grid[0].size();

        if ((row + col - 1) % 2)
            return false;

        if (grid[0][0] == ')' || grid[row - 1][col - 1] == '(')
            return false;

        memset(dp, -1, sizeof(dp));

        return solve(grid, 0, 0, 0);
    }
};