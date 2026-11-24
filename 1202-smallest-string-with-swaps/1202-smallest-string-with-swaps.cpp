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
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        vector<pair<int,char>>vec;
        for(int i=0;i<n;i++){
            parent.push_back(i);
        }
        for(auto e:pairs){
            uni(e[0],e[1]);
        }
        unordered_map<int,vector<int>>mp;
        for (int i = 0; i < n; i++) {
            mp[find(i)].push_back(i);
        }
        for(auto [k,v]:mp){
            string temp;
            for(int i=0;i<v.size();i++){
                temp.push_back(s[v[i]]);
            }
            sort(temp.begin(),temp.end());
            for(int i=0;i<v.size();i++){
                s[v[i]]=temp[i];
            }
        }
        return s;
    }
};