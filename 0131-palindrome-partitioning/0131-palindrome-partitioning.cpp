class Solution {
public:
    bool ispal(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;j--;
        }
        return true;
    }
    void dffs(string &s ,int idx,vector<vector<string>> &ans,vector<string>&curr){
        if(idx==s.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(ispal(s,idx,i)){
                curr.push_back(s.substr(idx, i-idx+1));
                dffs(s,i+1,ans,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string>curr;
        dffs(s,0,ans,curr);
        return ans;
    }
};