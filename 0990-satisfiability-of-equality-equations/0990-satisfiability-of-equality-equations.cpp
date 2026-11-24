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
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++){
            parent.push_back(i);
        }
        for(auto s:equations){
            if(s[1]=='='){
                uni(s[0]-'a',s[3]-'a');
            }
            
        }
        for(auto s:equations){
            if(s[1]!='='&&find(s[0]-'a')==find(s[3]-'a')){
                return false;
            }
        }
        return true;
    }
};