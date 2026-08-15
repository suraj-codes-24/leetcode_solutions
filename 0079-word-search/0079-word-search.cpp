class Solution {
public:
    vector<pair<int,int>>dir={
        {1,0},{-1,0},{0,1},{0,-1}
    };
    int m,n;
    bool find(vector<vector<char>>& board, string &word,int r, int c,int idx){
        if(idx==word.size()) return true;
        if(r<0||c<0||r>=m||c>=n||board[r][c]=='$'||board[r][c]!=word[idx]) return false;
        char temp=board[r][c];
        board[r][c]='$';
        for(auto [dr,dc]:dir){
            int nr=dr+r,nc=dc+c;
            if(find(board,word,nr,nc,idx+1))return true;
        }
        board[r][c]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0]&&find(board,word,i,j,0)) return true;
            }
        }
        return false;
    }
};