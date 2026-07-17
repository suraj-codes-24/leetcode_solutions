class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        

        int m=heightMap.size();
        int n=heightMap[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
        vector<pair<int, int>> dir = {
            {-1, 0}, {1, 0},  {0, -1}, {0, 1}   
        };

       // Top and Bottom rows
        for (int j = 0; j < n; j++) {
            pq.push({heightMap[0][j], 0, j});
            visited[0][j] = true;

            pq.push({heightMap[m - 1][j], m - 1, j});
            visited[m - 1][j] = true;
        }

        // Left and Right columns (excluding corners)
        for (int i = 1; i < m - 1; i++) {
            pq.push({heightMap[i][0], i, 0});
            visited[i][0] = true;

            pq.push({heightMap[i][n - 1], i, n - 1});
            visited[i][n - 1] = true;
        }
        int sum=0;
        while(!pq.empty()){
            auto [h,r,c]=pq.top();
            pq.pop();
            for(auto [dr,dc]:dir){
                int nr=r+dr;
                int nc=c+dc;
                if (nr < 0 || nr >= m || nc < 0 || nc >= n || visited[nr][nc])
                    continue;
                visited[nr][nc] = true;

                if (heightMap[nr][nc] < h) {
                    sum += h - heightMap[nr][nc];
                    pq.push({h, nr, nc});
                } 
                else {
                    pq.push({heightMap[nr][nc], nr, nc});
                }
            }

        }
        return sum;

        
    }
};