class Solution {
public:
    const long long MOD = 1e9+7;
    const long long base = 31;

    vector<long long> hash;
    vector<long long> power;
    unordered_set<long long>st;
    int n;
    int t;

    bool generate(int pos, int k, long long h){
        if(pos == k){
            if(st.count(h)){
                return true;
            }
            return false;
        }

        bool a = generate(pos+1, k, (h*base+1)%MOD);
        bool b = generate(pos+1, k, (h*base+2)%MOD);

        return a&&b;
    }

    void fills(){
        for(int l=0; l+t<=n; l++){
            int r = l+t;
            long long key = ((hash[r] - hash[l]*power[t])%MOD+MOD)%MOD;
            st.insert(key);
        }
    }

    bool hasAllCodes(string s, int k) {
        n = s.size();

        hash.resize(n+1, 0);
        power.resize(n+1, 0);

        power[0] = 1;

        for(int i=0; i<n; i++){
            hash[i+1] = (hash[i]*base+s[i]-'0'+1)%MOD;
            power[i+1] = (power[i]*base)%MOD;
        }
        t=k;
        fills();
        return generate(0, k, 0);
    }
};