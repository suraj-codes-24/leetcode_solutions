
class Solution {
public:
    void placequeen(int &count,vector<string>& tans,int& n,vector<bool>& ld,vector<bool>& rd,vector<bool>& col,int i){
        if(i==n){
            count++;
            return;
        }
        for(int j=0;j<n;j++){
            if(col[j] || ld[n-1+i-j] || rd[i+j]) continue;
            col[j]=true,ld[n-1+i-j]=true,rd[i+j]=true,tans[i][j]='Q';
            placequeen(count,tans,n,ld,rd,col,i+1);
            col[j]=false,ld[n-1+i-j]=false,rd[i+j]=false,tans[i][j]='.';
        }
    }
    int totalNQueens(int n) {
        int count=0;
        vector<string> tans(n,string(n,'.'));
        vector<bool> ld(2*n-1,false),rd(2*n-1,false),col(n,false);
        placequeen(count,tans,n,ld,rd,col,0);
        return count;
    }
};