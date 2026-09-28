class Solution1 {
public:
    int row, col;
    int dp[71][71][71];

    int solve(vector<vector<int>>& grid, int i, int c1, int c2) {
        // Out of bounds
        if (i >= row || c1 < 0 || c1 >= col || c2 < 0 || c2 >= col)
            return -1e9;

        // Already calculated
        if (dp[i][c1][c2] != -1)
            return dp[i][c1][c2];

        // Current cherries
        int curr = grid[i][c1];

        if (c1 != c2)
            curr += grid[i][c2];

        // 9 possible movements
        int ll = solve(grid, i + 1, c1 - 1, c2 - 1);
        int lr = solve(grid, i + 1, c1 - 1, c2 + 1);
        int ld = solve(grid, i + 1, c1 - 1, c2);

        int rr = solve(grid, i + 1, c1 + 1, c2 + 1);
        int rl = solve(grid, i + 1, c1 + 1, c2 - 1);
        int rd = solve(grid, i + 1, c1 + 1, c2);

        int dd = solve(grid, i + 1, c1, c2);
        int dl = solve(grid, i + 1, c1, c2 - 1);
        int dr = solve(grid, i + 1, c1, c2 + 1);

        int best = max({
            ll, lr, ld,
            rr, rl, rd,
            dd, dl, dr
        });

        return dp[i][c1][c2] = curr + best;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        row = grid.size();
        col = grid[0].size();

        memset(dp, -1, sizeof(dp));

        return solve(grid, 0, 0, col - 1);
    }
};
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<vector<int>>> dp(
            row,
            vector<vector<int>>(col, vector<int>(col, 0))
        );

        // Base case: last row
        for (int c1 = 0; c1 < col; c1++) {
            for (int c2 = 0; c2 < col; c2++) {
                if (c1 == c2)
                    dp[row - 1][c1][c2] = grid[row - 1][c1];
                else
                    dp[row - 1][c1][c2] =
                        grid[row - 1][c1] + grid[row - 1][c2];
            }
        }

        // Fill from bottom to top
        for (int i = row - 2; i >= 0; i--) {
            for (int c1 = 0; c1 < col; c1++) {
                for (int c2 = 0; c2 < col; c2++) {

                    int curr = grid[i][c1];

                    if (c1 != c2)
                        curr += grid[i][c2];

                    int best = 0;

                    for (int d1 = -1; d1 <= 1; d1++) {
                        for (int d2 = -1; d2 <= 1; d2++) {

                            int nc1 = c1 + d1;
                            int nc2 = c2 + d2;

                            if (nc1 >= 0 && nc1 < col &&
                                nc2 >= 0 && nc2 < col) {

                                best = max(best, dp[i + 1][nc1][nc2]);
                            }
                        }
                    }

                    dp[i][c1][c2] = curr + best;
                }
            }
        }

        return dp[0][0][col - 1];
    }
};