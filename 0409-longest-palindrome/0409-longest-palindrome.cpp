class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto ch : s) {
            mp[ch]++;
        }
        int sum=0;
        int maxodd=0;
        char ch;
        for(auto [k,v]:mp){
            if(v%2!=0&&v>maxodd){
                maxodd=v;
                ch=k;
            }
        }
        for(auto [k,v]:mp){
            if(k==ch){
                sum+=v;
                continue;
            }
            if(v%2==0){
                sum+=v;
            }
            else{
                sum+=v-1;
            }
        }
        return sum;


    }
};