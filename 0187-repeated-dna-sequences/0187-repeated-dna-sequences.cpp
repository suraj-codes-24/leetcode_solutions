class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        vector<string> ans;

        if(n<10) return ans;

        const long long MOD=1e9+7;
        const long long base=29;

        vector<long long> hash(n+1,0);
        vector<long long> power(n+1,1);

        for(int i=0;i<n;i++){
            hash[i+1]=(hash[i]*base+s[i]-'A'+1)%MOD;
            power[i+1]=(power[i]*base)%MOD;
        }

        unordered_map<long long,vector<string>> mp;
        unordered_set<string> added;

        for(int l=0;l+10<=n;l++){
            int r=l+10;

            long long key=(hash[r]-(hash[l]*power[10])%MOD+MOD)%MOD;

            string sub=s.substr(l,10);

            bool found=false;

            for(auto &x:mp[key]){
                if(x==sub){
                    found=true;
                    break;
                }
            }

            if(!found){
                mp[key].push_back(sub);
            }
            else if(!added.count(sub)){
                ans.push_back(sub);
                added.insert(sub);
            }
        }

        return ans;
    }
};