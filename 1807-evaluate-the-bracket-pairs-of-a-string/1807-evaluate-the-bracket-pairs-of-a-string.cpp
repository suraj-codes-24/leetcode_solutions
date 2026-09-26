class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        
        unordered_map<string,string> mp;
        
        for(auto x : knowledge) {
            mp[x[0]] = x[1];
        }
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                i++;
                string temp="";
                while(i<n&&s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                if(mp.count(temp)){
                    ans+=mp[temp];
                }
                else{
                    ans+="?";
                }
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};