class Solution {
public:
    const int base=29;
    const int MOD=1e9+7;
    int n;
    string shortestPalindrome(string s) {
        n=s.size();
        long long hash1=0,hash2=0;
        long long power=1;
        int palidx=-1;
        for(int i=0;i<n;i++,power=(power*base)%MOD){
            hash1=(hash1*base+s[i]-'a'+1)%MOD;
            hash2=(hash2+power*(s[i]-'a'+1))%MOD;
            if(hash1==hash2)palidx=i;
        }
        string add=s.substr(palidx+1,n-palidx);
        reverse(add.begin(),add.end());
        return add+s;

    }
};