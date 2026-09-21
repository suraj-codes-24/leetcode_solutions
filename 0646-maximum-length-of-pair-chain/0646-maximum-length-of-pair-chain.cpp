class Solution {
public:
    int dp[1001][1001];

    int solve(vector<vector<int>>& pairs, int prev, int i) {
        if(i >= pairs.size())
            return 0;

        if(prev != -1 && dp[i][prev] != -1)
            return dp[i][prev];

        int taken = 0;

        if(prev == -1 || pairs[i][0] > pairs[prev][1]) {
            taken = 1 + solve(pairs, i, i + 1);
        }

        int nott = solve(pairs, prev, i + 1);

        if(prev != -1)
            dp[i][prev] = max(taken, nott);

        return max(taken, nott);
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        memset(dp, -1, sizeof(dp));

        sort(pairs.begin(), pairs.end());

        return solve(pairs, -1, 0);
    }
};