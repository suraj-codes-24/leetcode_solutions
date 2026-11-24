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
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n=s1.size();
        for(int i=0;i<26;i++){
            parent.push_back(i);
        }
        for(int i=0;i<n;i++){
            uni(s1[i]-'a',s2[i]-'a');
        }
        unordered_map<int,vector<char>>mp;
        for(int i=0;i<26;i++){
            mp[find(i)].push_back(i+'a');
        }
        string ans;
        for(int i=0;i<baseStr.size();i++){
           ans.push_back(mp[parent[baseStr[i]-'a']][0]);
        }
        return ans;
    }
};