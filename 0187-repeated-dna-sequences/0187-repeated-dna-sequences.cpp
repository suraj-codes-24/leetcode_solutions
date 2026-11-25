class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        vector<string> ans;

        if(n<10) return ans;

        const long long MOD1=1000000007;
        const long long MOD2=1000000009;
        const long long BASE1=31;
        const long long BASE2=37;

        vector<long long> h1(n+1,0),h2(n+1,0);
        vector<long long> p1(n+1,1),p2(n+1,1);

        for(int i=0;i<n;i++){
            int value=s[i]-'A'+1;

            h1[i+1]=(h1[i]*BASE1+value)%MOD1;
            h2[i+1]=(h2[i]*BASE2+value)%MOD2;

            p1[i+1]=(p1[i]*BASE1)%MOD1;
            p2[i+1]=(p2[i]*BASE2)%MOD2;
        }

        unordered_map<long long,int> mp;

        for(int l=0;l+10<=n;l++){
            int r=l+10;

            long long key1=(h1[r]-h1[l]*p1[10]%MOD1+MOD1)%MOD1;
            long long key2=(h2[r]-h2[l]*p2[10]%MOD2+MOD2)%MOD2;

            long long key=key1*MOD2+key2;

            mp[key]++;

            if(mp[key]==2){
                ans.push_back(s.substr(l,10));
            }
        }

        return ans;
    }
};