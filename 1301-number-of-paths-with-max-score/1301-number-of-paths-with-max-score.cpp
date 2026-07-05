class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        const int MOD = 1e9 + 7;
        
        // dp[r][c] stores a pair: {maximum_score, number_of_paths}
        // We initialize the entire grid to {-100000, 0} to represent unreachable/invalid states.
        // We use -100000 (instead of INT_MIN) to prevent integer underflow when adding cell values later.
        vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n, {-100000, 0}));
        
        // Base Case: We anchor our logic at the destination (top-left).
        // The score remaining is 0, and there is exactly 1 way to just stand at the finish line.
        dp[0][0] = {0, 1}; 
        
        // Iterate through every cell in the grid, row by row.
        // This builds the answers from the destination pushing outward toward the start.
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                // Skip the destination cell (already initialized) and obstacle cells ('X').
                if (r == 0 && c == 0) continue;
                if (board[r][c] == 'X') continue;
                
                // Look at the three possible cells we could have stepped FROM to get here.
                // If a coordinate is out of bounds, treat it as an invalid path (-100000).
                int up = (r > 0) ? dp[r - 1][c].first : -100000;
                int left = (c > 0) ? dp[r][c - 1].first : -100000;
                int diag = (r > 0 && c > 0) ? dp[r - 1][c - 1].first : -100000;
                
                // Find the highest possible score among the valid incoming moves.
                int maxx = max({up, left, diag});
                
                // If the max score is negative, it means this cell is completely blocked off by 'X's or edges.
                // We skip it and leave its dp state at the default {-100000, 0}.
                if (maxx < 0) continue; 
                
                int count = 0;
                
                // Add up the path counts from ONLY the directions that yielded the maximum score.
                // Apply modulo at each addition to strictly prevent integer overflow.
                if (r > 0 && maxx == dp[r - 1][c].first) count = (count + dp[r - 1][c].second) % MOD;
                if (c > 0 && maxx == dp[r][c - 1].first) count = (count + dp[r][c - 1].second) % MOD;
                if (r > 0 && c > 0 && maxx == dp[r - 1][c - 1].first) count = (count + dp[r - 1][c - 1].second) % MOD;
                
                // Calculate the numeric value of the current cell.
                // Start ('S') and End ('E') cells contribute 0 to the score.
                int curr = (board[r][c] == 'S' || board[r][c] == 'E') ? 0 : (board[r][c] - '0');
                
                // Store the final calculated max score and total valid paths for this specific cell.
                dp[r][c] = {maxx + curr, count};
            }
        }
        
        // After the loops finish, check the starting position (bottom-right). 
        // If its max score is negative, it means no valid path ever connected the start to the end.
        if (dp[n - 1][n - 1].first < 0) {
            return {0, 0};
        }
        
        // Return the final accumulated score and path count calculated at the starting position.
        return {dp[n - 1][n - 1].first, dp[n - 1][n - 1].second};
    }
};