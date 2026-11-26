class Solution {
public:
    const int MOD = 1e9+7;
    const int base = 29;
    vector<long long> hash1, hash2;
    vector<long long> power;
    int n;

    long long sumScores(string s) {

        n = s.size();
        long long sum = 0;

        hash1.assign (n + 1, 0);
        hash2.assign (n + 1, 0);
        power.assign (n + 1, 0);
        power[0] = 1;

        for (int i = 0; i < n; i++) {
            hash1[i+1] = (hash1[i] * base + s[i] - 'a' + 1) % MOD;
            hash2[i+1] = (hash2[i] + power[i] * (s[n - 1 - i] - 'a' + 1)) % MOD;
            power[i+1] = (power[i] * base) % MOD;
        }

        auto check = [&](int len, int right) {

            long long prefixHash = (hash1[len] * power[right - len]) % MOD;
            long long suffixHash = (hash2[right] - hash2[right - len] + MOD) % MOD;
            
            return prefixHash == suffixHash;
        };
        
        for(int i = 1; i <= n; i++) {

            int left = 0;
            int right = i;

            while (left < right) {
                int mid = left + (right - left + 1) / 2;
                if (check(mid, i)) {
                    left = mid;
                } else {
                    right = mid - 1;
                }
            }

            sum += left;
        }
        return sum;
    }
};