class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int row=grid.size();
        int clm=grid[0].size();

        for(int i=0;i<row;i++){
            if(grid[i][0]==1){
            q.push({i,0});
            grid[i][0]=0;
            }
        }
        for(int i=1;i<clm;i++){
            if(grid[0][i]==1){
            q.push({0,i});
            grid[0][i]=0;
            }
        }
        for(int i=1;i<clm;i++){
            if(grid[row-1][i]==1){
            q.push({row-1,i});
            grid[row-1][i]=0;
            }
        }
        for(int i=1;i<row-1;i++){
            if(grid[i][clm-1]==1){
            q.push({i,clm-1});
            grid[i][clm-1]=0;
            }
        }

        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();
            if(r+1<row&&grid[r+1][c]==1)
            {
                q.push({r+1,c});
                grid[r+1][c]=0;
            }
            if(r-1>=0&&grid[r-1][c]==1)
            {
                q.push({r-1,c});
                grid[r-1][c]=0;
            }
            if(c+1<clm&&grid[r][c+1]==1)
            {
                q.push({r,c+1});
                grid[r][c+1]=0;
            }
            if(c-1>=0&&grid[r][c-1]==1)
            {
                q.push({r,c-1});
                grid[r][c-1]=0;
            }
        }

        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<clm;j++){
                if(grid[i][j]==1)count++;
            }
        }
        return count;
        
    }
};