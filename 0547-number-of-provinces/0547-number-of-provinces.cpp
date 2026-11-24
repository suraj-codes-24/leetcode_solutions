class Solution {
public:
    vector<int>parent;
    int find(int x){
        if(parent[x]==x)return x;
        return parent[x]=find(parent[x]);
    }
    void uni(int a,int b){
        int pa=find(a);
        int pb=find(b);
        if(pa!=pb){
            parent[pb]=pa;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        for(int i=0;i<n;i++){
            parent.push_back(i);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isConnected[i][j]==1){
                    uni(i,j);
                }
            }
        }
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(find(i));
        }
        return st.size();

    }
};