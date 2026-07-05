class Solution {
public:
    const int MOD = 1e9 + 7;
    pair<int, int> dp[101][101];

    pair<int, int> solve_max_sum(vector<string>& board, int r, int c) {
        if (r == 0 && c == 0) return {0, 1};
        if (r < 0 || c < 0) return {-100000, 0};
        if (board[r][c] == 'X') return {-100000, 0};
        
        if (dp[r][c].first != -1) return dp[r][c];
        
        int curr;
        if (board[r][c] == 'E' || board[r][c] == 'S') curr = 0;
        else curr = board[r][c] - '0';

        pair<int, int> up = solve_max_sum(board, r - 1, c);
        pair<int, int> left = solve_max_sum(board, r, c - 1);
        pair<int, int> diag = solve_max_sum(board, r - 1, c - 1);
        
        int maxx = max({up.first, left.first, diag.first});
        int count = 0;
        
        if (maxx == up.first) count = (count + up.second) % MOD;
        if (maxx == left.first) count = (count + left.second) % MOD;
        if (maxx == diag.first) count = (count + diag.second) % MOD; 
        
        int total_sum = curr + maxx;

        return dp[r][c] = {total_sum, count};
    }

    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                dp[i][j] = {-1, -1}; 
            }
        }
        
        pair<int, int> ans = solve_max_sum(board, n - 1, n - 1);
        
        if (ans.first < 0) {
            return {0, 0};
        }
        
        return {ans.first, ans.second};
    }
};