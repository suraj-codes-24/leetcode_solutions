class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        const int MOD=1e9+7;
        int B=29;
        long long hash1=0,hash2=0;
        int length=0;
        long long pow=1;
        for(int i=0;i<n-1;i++,pow=(pow*B)%MOD){
            hash1=(hash1*B+s[i]-'a'+1)%MOD;
            hash2=(hash2+(s[n-1-i]-'a'+1)*pow)%MOD;
            if(hash1==hash2){
                length=max(length,i+1);
            }
        }
        return s.substr(0,length);
    }
};