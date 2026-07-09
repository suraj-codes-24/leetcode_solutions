class Solution {
public:
    void dfs(int curr,vector<int>&component,int com,vector<vector<int>>&adj){
        component[curr]=com;
        for(auto neb:adj[curr]){
            if(component[neb]==-1){
                dfs(neb,component,com,adj);
            }
        }
    }
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        
        vector<vector<int>>adj(n);

        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=maxDiff){
                adj[i-1].push_back(i);
                adj[i].push_back(i-1);
            }
        }
        vector<int>component(n,-1);
        int com=1;
        for(int i=0;i<n;i++){
            if(component[i]==-1){
                dfs(i,component,com,adj);
                com++;
            }
        }
        vector<bool>ans;
        for(auto q:queries){
            if(component[q[0]]==component[q[1]]){
                ans.push_back(true);
            }
            else
            ans.push_back(false);
        }
        return ans;
    }
};