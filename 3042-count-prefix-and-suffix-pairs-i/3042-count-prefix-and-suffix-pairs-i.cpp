class Solution {
public:
    const int MOD=1e9+7;
    const int base=29;
    bool isPrefixAndSuffix(string& str1,string& str2){
        long long power=1;
        long long hash1=0;
        for(auto x:str1){
            hash1=(hash1*base+x-'a'+1)%MOD;
        }
        long long hash2=0,hash3=0;
        int n=str2.size();
        for(int i=0;i<n;i++,power=(power*base)%MOD){
            hash2=(hash2*base+str2[i]-'a'+1)%MOD;
            hash3=(hash3+(str2[n-1-i]-'a'+1)*power)%MOD;
            if(hash2==hash3&&hash2==hash1)return true;
        }
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(words[j].size()<words[i].size())continue;
                if(isPrefixAndSuffix(words[i],words[j]))count++;
            }
        }
        return count;
    }
};