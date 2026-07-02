class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        int m=grid.size();
        int n=grid[0].size();
        queue<tuple<int,int,int>>q;
        q.push({health-grid[0][0],0,0});
         vector<vector<int>> best(m, vector<int>(n, -1));
        while(!q.empty()){
            auto[h,r,c]=q.front();
            q.pop();
            if(h < best[r][c]) continue;
            

            for(auto [dr,dc]:dir){
                int nr=r+dr,nc=c+dc;
                 if(nr >= 0 && nr < m && nc >= 0 && nc < n){
                    int newh=h-grid[nr][nc];
                    if(newh>best[nr][nc])
                    {q.push({newh,nr,nc});
                     best[nr][nc]=newh;
                    }
                 }

            }
        }
        return best[m-1][n-1]>=1;
    }
};