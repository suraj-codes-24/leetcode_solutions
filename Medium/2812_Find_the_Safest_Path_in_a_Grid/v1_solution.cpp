class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        queue<pair<int,int>>q;
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    dist[i][j]=0;
                }
            }
        }
        vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for(auto [dr, dc] : dir) {
                int nr = r + dr;
                int nc = c + dc;

                if(nr >= 0 && nr < n && nc >= 0 && nc < n) {
                    if(dist[nr][nc] > dist[r][c] + 1) {
                        dist[nr][nc] = dist[r][c] + 1;
                        q.push({nr, nc});
                    }
                }
            }
        }
        vector<vector<int>>best(n,vector<int>(n,-1));
        priority_queue<tuple<int,int,int>>pq;
        pq.push({dist[0][0],0,0});
        best[0][0]=dist[0][0];

        while(!pq.empty()){
            auto [safe,r,c]=pq.top();
            pq.pop();
            if(r==n-1&&c==n-1)return safe;

            for(auto [dr,dc]:dir){
                int nr = r + dr, nc = c + dc;
                if(nr >= 0 && nr < n && nc >= 0 && nc < n){
                    int newsafe=min(safe,dist[nr][nc]);
                     if(newsafe > best[nr][nc]) {
                        best[nr][nc] = newsafe;
                        pq.push({newsafe, nr, nc});
                    }
                }
            }
        }
        return 0;
    }
};