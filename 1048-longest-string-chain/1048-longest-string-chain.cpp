class Solution {
public:
   bool match(string &s, string &t) {
        if (t.size() != s.size() + 1)
            return false;

        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
                j++;
            } else {
                j++;  
            }
        }

        return i == s.size();
    }
    int dp[1001][1001];
    int solve(vector<string>& words,int prev ,int idx){
        if(idx>=words.size()) return 0;

        if(prev!=-1&&dp[idx][prev]!=-1) return dp[idx][prev];
        int take=0;
        if(prev==-1||match(words[prev],words[idx])){
            take=1+solve(words,idx,idx+1);
        }
        int nott=solve(words,prev,idx+1);
        if(prev!=-1){
            dp[idx][prev]=max(take,nott);
        }
        return max(take,nott);
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string &a, string &b) {
            return a.size() < b.size();
        });
        memset(dp,-1,sizeof(dp));
        return solve(words,-1,0);
    }
};