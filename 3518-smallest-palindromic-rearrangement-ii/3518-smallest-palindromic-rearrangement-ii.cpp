class Solution {
public:
    long long ncr(int n, int r, int k) {
        r = min(r, n - r);

        long long res = 1;

        for (int i = 1; i <= r; i++) {
            res = res * (n - r + i) / i;

            if (res >= k)
                return k;
        }

        return res;
    }

    string smallestPalindrome(string s, int k) {

        int n = s.size();

        char mid = '0';

        if (n % 2 == 1) {
            mid = s[n / 2];
        }

        vector<int> freq(26, 0);

        // Count characters of the left half
        for (char c : s) {
            freq[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            freq[i] /= 2;
        }

        string half = "";
        int length = n / 2;


        for (int pos = 0; pos < length; pos++) {

            bool placed = false;

            for (int ch = 0; ch < 26; ch++) {

                if (freq[ch] == 0)
                    continue;


                // Try placing this character
                freq[ch]--;

                long long ways = 1;
                int total = 0;

                for (int x : freq)
                    total += x;


                // Calculate number of permutations
                for (int x : freq) {

                    if (x) {
                        ways = min(
                            ways * ncr(total, x, k),
                            (long long)k
                        );

                        total -= x;
                    }

                    if (ways >= k)
                        break;
                }


                if (k <= ways) {

                    half.push_back(ch + 'a');
                    placed = true;
                    break;

                } 
                else {

                    k -= ways;
                    freq[ch]++;
                }
            }


            if (!placed)
                return "";
        }


        string rev = half;
        reverse(rev.begin(), rev.end());


        string ans = half;

        if (mid != '0')
            ans.push_back(mid);

        ans += rev;


        return ans;
    }
};