class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        int start = 0;
        int length = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (dp[i][j] == -1)
                    dp[i][j] = isPalindrome(s, i, j);

                if (dp[i][j] && j - i + 1 > length) {
                    start = i;
                    length = j - i + 1;
                }
            }
        }

        return s.substr(start, length);
    }
};