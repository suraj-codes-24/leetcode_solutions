class Solution {
public:
    vector<pair<int,int>> dir = {
        {1,0}, {0,1}, {-1,0}, {0,-1}
    };

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n = maze.size();
        int m = maze[0].size();

        queue<tuple<int,int,int>> q;
        q.push({entrance[0], entrance[1], 0});

        maze[entrance[0]][entrance[1]] = '+';

        while (!q.empty()) {

            auto [r, c, move] = q.front();
            q.pop();

            // Don't consider entrance itself as an exit
            if ((r != entrance[0] || c != entrance[1]) &&
                (r == 0 || r == n-1 || c == 0 || c == m-1)) {
                return move;
            }

            for (auto [dr, dc] : dir) {

                int nr = r + dr;
                int nc = c + dc;

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    maze[nr][nc] == '.') {

                    maze[nr][nc] = '+';
                    q.push({nr, nc, move + 1});
                }
            }
        }

        return -1;
    }
};