class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n, false));

        int start = 0;
        int length = 0;

        for (int i = n-1; i >=0; i--) {
            for (int j = i; j < n; j++) {
                if(i==j){
                    dp[i][j]=true;

                }
                else if(i==j-1){
                    dp[i][j]=s[i]==s[j];
                }
                else{
                    dp[i][j]=s[i]==s[j]&&dp[i+1][j-1];
                }
                if(dp[i][j]&&length<j-i+1){
                    length=j-i+1;
                    start=i;
                }
            }
        }

        return s.substr(start, length);
    }
};