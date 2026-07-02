class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        int m=grid.size();
        int n=grid[0].size();
        deque<pair<int,int>>dq;
        dq.push_front({0,0});
         vector<vector<int>> best(m, vector<int>(n, INT_MAX));
         best[0][0]=grid[0][0];
        while(!dq.empty()){
            auto[r,c]=dq.front();
            dq.pop_front();
            for(auto [dr,dc]:dir){
                int nr=r+dr,nc=c+dc;
                 if(nr >= 0 && nr < m && nc >= 0 && nc < n){
                    if(best[nr][nc]>best[r][c]+grid[nr][nc])
                    {
                     best[nr][nc]=best[r][c]+grid[nr][nc];
                     if(grid[nr][nc]==1)
                        dq.push_back({nr,nc});
                        else
                        dq.push_front({nr,nc});
                
                    }
                 }

            }
        }
        return health-best[m-1][n-1]>=1;
    }
};