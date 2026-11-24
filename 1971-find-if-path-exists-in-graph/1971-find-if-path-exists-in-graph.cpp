class Solution {
public:
    vector<int>parent;
    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    void uni(int a,int b){
        int pa=find(a);
        int pb=find(b);
        if(pa!=pb){
            parent[pb]=pa;
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(int i=0;i<n;i++)parent.push_back(i);
        for(auto e:edges){
            uni(e[0],e[1]);
        }
        if(find(source)!=find(destination))return false;
        return true;
    }
};