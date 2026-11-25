class Solution {
public:
    vector<long long> hash;
    vector<long long> po;
    int n;

    string subStrHash(string s, int power, int modulo, int k, int hashValue) {
        n = s.size();
        hash.assign(n + 1, 0);
        po.assign(n + 1, 0);
        po[0] = 1;
        for (int i = 0; i < n; i++) {
            po[i + 1] = (po[i] * power) % modulo;
        }
        for (int i = n - 1; i >= 0; i--) {
            hash[i] = (hash[i + 1] * power + (s[i] - 'a' + 1)) % modulo;
        }
        for (int l = 0; l + k <= n; l++) {
            int r = l + k;
            long long key = (hash[l] - (hash[r] * po[k]) % modulo + modulo) % modulo;
            if (hashValue == key) return s.substr(l, r - l);
        }
        return "";
    }
};