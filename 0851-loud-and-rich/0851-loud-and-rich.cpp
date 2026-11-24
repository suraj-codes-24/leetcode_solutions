class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<vector<int>>adj(n);
        vector<int>indeg(n);
        for(auto e:richer){
            adj[e[0]].push_back(e[1]);
            indeg[e[1]]++;
        }
        queue<int>q;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=i;
            if(indeg[i]==0){
                q.push(i);
            }
            
        }
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            for(auto neb:adj[node]){
                indeg[neb]--;
            if (quiet[ans[neb]] > quiet[ans[node]]) {
                ans[neb] = ans[node];
            }
                if(indeg[neb]==0){
                    q.push(neb);
                }
            }
        }
        return ans;
    }
};