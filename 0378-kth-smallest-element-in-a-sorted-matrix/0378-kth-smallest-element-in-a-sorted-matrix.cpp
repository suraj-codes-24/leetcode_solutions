class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
       priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
       vector<vector<int>>visited(n,vector<int>(n,false));
       pq.push({matrix[0][0],0,0});
       visited[0][0] = true;

       while(!pq.empty()){
            auto [val,r,c]=pq.top();
            pq.pop();
            k--;
            if(k==0)return val;
            if(r+1<n&&!visited[r+1][c]){
            pq.push({matrix[r+1][c],r+1,c});
            visited[r+1][c] = true;
            }
            if(c+1<n&&!visited[r][c+1]){
                pq.push({matrix[r][c+1],r,c+1});
                visited[r][c+1] = true;
            }
        }
        return 0;
    }    
};