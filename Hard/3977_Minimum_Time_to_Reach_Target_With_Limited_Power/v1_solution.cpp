class Solution {
public:
    vector<long long> minTimeMaxPower(int n, vector<vector<int>>& edges, int power, vector<int>& cost, int source, int target) {
        auto velmorathi = edges;
        vector<vector<pair<int,int>>>adj(n);

        for(auto &e:edges){
            adj[e[0]].push_back({e[1],e[2]});
        }
        vector<vector<long long >> dist(n,vector<long long>(power+1,LLONG_MAX));
        priority_queue<tuple<long long ,int ,int>,vector<tuple<long long ,int ,int>>,greater<>>pq;
        dist[source][power]=0;
        pq.push({0,-power,source});
        while(!pq.empty()){
            auto [t,neg_p,u]=pq.top();
            pq.pop();
            int p=-neg_p;
            if (t > dist[u][p]) continue;
            if (u == target) {
                return {t, (long long)p};
            }
            if(p<cost[u])continue;
            int next_p=p-cost[u];
            for(auto &edge:adj[u]){
                int v=edge.first;
                long long next_t=t+edge.second;
                if (next_t < dist[v][next_p]) {
                    dist[v][next_p] = next_t;
                    pq.push({next_t, -next_p, v});
                }
            }
        }
        return {-1,-1};
        
    }
};