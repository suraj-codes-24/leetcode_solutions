struct PairHash {
    size_t operator()(const pair<long long,long long>& p) const {
        return hash<long long>()(p.first) ^ (hash<long long>()(p.second) << 1);
    }
};
class Solution {
public:
    const int base1 = 29, base2=37;
    const int MOD1 = 1e9+5, MOD2=1e9+7;

    vector<long long> hash1,hash2;
    vector<long long> power1,power2;
    string ans, s;
    int n;

    bool check(int len){
        unordered_set<pair<long long,long long>, PairHash> st;
        for(int l=0;l+len<=n;l++){
            int r=l+len;
            long long key1=((hash1[r]-(hash1[l]*power1[len])%MOD1)+MOD1)%MOD1;
            long long key2=((hash2[r]-(hash2[l]*power2[len])%MOD2)+MOD2)%MOD2;
            if(st.count({key1,key2})){
                ans=s.substr(l,r-l);
                return true;
            }
            st.insert({key1,key2});
        }
        return false;
    }

    string longestDupSubstring(string str) {
        s = str;
        n = s.size();

        hash1.assign(n+1, 0);
        power1.assign(n+1, 0);
        hash2.assign(n+1, 0);
        power2.assign(n+1, 0);
        power1[0] = 1;
        power2[0] = 1;

        for(int i = 0; i < n; i++) {
            hash1[i+1] = (hash1[i] * base1 + s[i] - 'a' + 1) % MOD1;
            power1[i+1] = (power1[i] * base1) % MOD1;

            hash2[i+1] = (hash2[i] * base2 + s[i] - 'a' + 1) % MOD2;
            power2[i+1] = (power2[i] * base2) % MOD2;
        }

        int low = 1, high = n-1;

        while(low <= high) {
            int mid = low + (high-low)/2;

            if(check(mid)) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }

        return ans;
    }
};