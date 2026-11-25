class Solution {
private:
    static constexpr long long BASE = 29;
    static constexpr long long MOD = 1e9 + 7;

    int n;
    vector<long long> prefixHash;
    vector<long long> powers;
    vector<array<int, 26>> prefixFreq;

    int countUniqueChars(int left, int right) const {
        int uniqueCount = 0;
        for (int c = 0; c < 26; ++c) {
            if (prefixFreq[right][c] - prefixFreq[left][c] > 0) {
                ++uniqueCount;
            }
        }
        return uniqueCount;
    }

    int maxFreqForLength(int len, int maxLetters) const {
        unordered_map<long long, int> freqMap;
        int best = 0;

        for (int left = 0; left + len <= n; ++left) {
            int right = left + len;
            if (countUniqueChars(left, right) > maxLetters) {
                continue;
            }

            long long key = (prefixHash[right] - (prefixHash[left] * powers[len]) % MOD + MOD) % MOD;
            best = max(best, ++freqMap[key]);
        }

        return best;
    }

public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        n = s.size();
        prefixHash.assign(n + 1, 0);
        powers.assign(n + 1, 0);
        prefixFreq.assign(n + 1, array<int, 26>{});
        powers[0] = 1;

        for (int i = 0; i < n; ++i) {
            int charIdx = s[i] - 'a';
            prefixHash[i + 1] = (prefixHash[i] * BASE + (charIdx + 1)) % MOD;
            powers[i + 1] = (powers[i] * BASE) % MOD;
            prefixFreq[i + 1] = prefixFreq[i];
            ++prefixFreq[i + 1][charIdx];
        }

        int maxOccurrences = 0;
        for (int len = minSize; len <= maxSize; ++len) {
            maxOccurrences = max(maxOccurrences, maxFreqForLength(len, maxLetters));
        }

        return maxOccurrences;
    }
};