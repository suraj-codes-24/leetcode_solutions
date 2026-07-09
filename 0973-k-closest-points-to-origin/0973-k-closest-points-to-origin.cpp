class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;

        priority_queue<tuple<long long,int,int>>pq;

        for(auto p:points){
            long long dist=1LL*(p[0]*p[0]+p[1]*p[1]);
            pq.push({dist,p[0],p[1]});
            while(pq.size()>k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            auto [d,a,b]=pq.top();
            pq.pop();
            ans.push_back({a,b});
        }
        return ans;
    }

};