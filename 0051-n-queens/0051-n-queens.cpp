class Solution {
public:
    bool canplace(int r, int c,int n, vector<vector<bool>>& placed){
        for(int i=0;i<r;i++){
            if(placed[i][c]) return false;
            for(int j=0;j<n;j++){
                if(placed[i][j] && abs(i-r)==abs(j-c))
                    return false;
            }
        }

        return true;
    }
    void dfs(int row,int n,vector<vector<string>>& answer,
             vector<vector<bool>>& placed,vector<string>& current) {
                if(row==n){
                    answer.push_back(current);
                    return;
                }
                
                    for(int j=0;j<n;j++){
                        if(canplace(row,j,n,placed)){
                            current[row][j]='Q';
                            placed[row][j]=true;
                            dfs(row+1,n,answer,placed,current);
                            current[row][j]='.';
                            placed[row][j]=false;
                        }
                    }
                
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<bool>> placed(n,vector<bool>(n,false));
        vector<vector<string>> answer;
        vector<string> current(n,string(n,'.'));

        dfs(0,n,answer,placed,current);

        return answer;
    }

};