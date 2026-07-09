class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
       priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
       pq.push({matrix[0][0],0,0});
       unordered_set<int>set;
       set.insert(0);

       while(!pq.empty()){
            auto [val,r,c]=pq.top();
            pq.pop();
            k--;
            if(k==0)return val;
            if(r+1<n&&!set.count((r+1)*n+c)){
                pq.push({matrix[r+1][c],r+1,c});
                set.insert((r+1)*n+c);
            }
            if(c+1<n&&!set.count((r*n)+c+1)){
                pq.push({matrix[r][c+1],r,c+1});
                set.insert((r*n)+c+1);
            }
        }
        return 0;
    }    
};