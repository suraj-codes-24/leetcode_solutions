class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>visited(n,false);
        vector<vector<int>>adj(n);
        for(auto c:connections){
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        int components=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                queue<int>q;
                q.push(i);
                while(!q.empty()){
                    auto node=q.front();
                    q.pop();

                    for(auto neb:adj[node]){
                        if(!visited[neb]){
                            q.push(neb);
                            visited[neb]=true;
                        }
                    }
                }
                components++;
            }
        }
        if(n-1<=connections.size()) return components-1;
        else return -1;
    }
};