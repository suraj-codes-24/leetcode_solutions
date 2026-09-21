class Solution {
public:
    bool ispalindrome(string &s ,int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int dp[1001][1001];
    string longestPalindrome(string s) {
        
        int length=-1;
        int st=-1;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                bool palindrome=false;
                if(dp[i][j]!=-1){
                    palindrome=dp[i][j];
                }
                else{
                    palindrome=ispalindrome(s,i,j);
                }
                if(palindrome){
                    dp[i][j]=true;
                    if(j-i+1>length){
                        length=j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,length);
    }
};