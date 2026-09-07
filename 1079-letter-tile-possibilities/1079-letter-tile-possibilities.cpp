class Solution {
public:
        int count;
    void dfs(string &s,string & sub,vector<bool>&avail){
        if(!sub.empty())
        count++;

            for(int i=0;i<s.size();i++){
                    if(i>0 && s[i]==s[i-1]&&avail[i-1]) continue;
                    if(avail[i]){
                            sub.push_back(s[i]);
                            avail[i]=false;
                            dfs(s,sub,avail);
                            avail[i]=true;
                            sub.pop_back();
                    }
            }
            
    }

    int numTilePossibilities(string tiles) {
        string sub="";
        vector<bool>avail(tiles.size(),true);
         sort(tiles.begin(),tiles.end());
        count=0;
        dfs(tiles,sub,avail);
        return count;
    }
};