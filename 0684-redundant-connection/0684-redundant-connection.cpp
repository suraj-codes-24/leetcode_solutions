class Solution {
public:
    vector<int>parent;
    int find(int x){
        if(parent[x]==x)return x;
        return parent[x]=find(parent[x]);
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        for(int i=0;i<n;i++){
            parent.push_back(i);
        }
        for(auto e: edges){
            int pa=find(e[0]-1);
            int pb=find(e[1]-1);
            if(pa!=pb){
                parent[pb]=pa;
            }
            else{
                return {e[0],e[1]};
            }
        }
        return {};
    }
};