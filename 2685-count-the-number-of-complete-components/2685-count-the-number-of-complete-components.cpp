class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited, vector<int> &indegree,int &v,int &tdeg){
        visited[node]=true;
        v++;
        tdeg+=indegree[node];
        for(auto neb:adj[node]){
            if(!visited[neb]){
                dfs(neb,adj,visited,indegree,v,tdeg);
            }
        }  
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(auto e:edges){
            indegree[e[0]]++;
            indegree[e[1]]++;
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
       
        int size=0;
        vector<bool>visited(n,false);

        for(int i=0;i<n;i++){
            if(!visited[i]){
                int v=0,tdeg=0;
                dfs(i,adj,visited,indegree,v,tdeg);
                 if(tdeg==v*(v-1))
                size++;
                
            }
        }
        return size;
        
    }
};