class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;

        priority_queue<tuple<long long,int,int>>pq;

        for(auto p:points){
            long long x = p[0];
            long long y = p[1];
            long long dist = x * x + y * y;
            pq.push({dist,p[0],p[1]});
            if (pq.size() > k) {
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