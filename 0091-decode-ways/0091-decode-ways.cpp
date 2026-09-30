class Solution {
public:
    int dp[101];
    int solve(string & s ,int i){
        if(i==s.size()) return 1;
        int count=0;
        if(dp[i]!=-1) return dp[i];
        if(s[i]!='0'){
            count+=solve(s,i+1);
        }
        if(i+1!=s.size()){
            int num=(s[i]-'0')*10+s[i+1]-'0';
            if(num>=10&&num<=26)
            count+=solve(s,i+2);
        }
        return dp[i]=count;
    }
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
        memset(dp,-1,sizeof(dp));
       return  solve(s,0);
    }
};