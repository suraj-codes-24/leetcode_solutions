class Solution {
public:
    int distinctEchoSubstrings(string text) {
        int n = text.size();
        const int base = 29;
        const int MOD = 1e9 + 7;
        vector<long long> power (n + 1);
        vector<long long> hash (n + 1);
        power[0] = 1;

        for(int i = 0; i < n; i++) {
            power[i + 1] = (power[i] * base) % MOD;
            hash[i + 1] = (hash[i] * base + text[i] - 'a' + 1) % MOD;
        }
        unordered_set<long long> st;
        for(int i = 0; i < n; i++) {
            
            for(int j = i; j < n; j++){
                int len = j - i + 1;
                int mid = i + len/2;
                int r = i + len;
                if( len % 2 != 0) continue;
                long long left = (hash[mid] - hash[i] * power[len / 2] % MOD + MOD) % MOD;
                long long right = (hash[r] - hash[mid] * power[len / 2] % MOD + MOD) % MOD;
                if(right == left){
                    long long key = (right - (left * power[len / 2]) % MOD +MOD ) % MOD;
                    st.insert (key);
                }

            }
        }
        return st.size();
    }
};