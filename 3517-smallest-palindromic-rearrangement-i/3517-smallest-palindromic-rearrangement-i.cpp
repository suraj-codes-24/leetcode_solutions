class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);

        for(auto x:s){
            freq[x-'a']++;
        }
        char cha='1';
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                freq[i]--;
                cha='a'+i;
            }
        }
        string ans="";
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                int f=freq[i]/2;
                char ch='a'+i;
                while(f--){
                    ans.push_back(ch);
                }
            }
        }
        string rev=ans;
        reverse(rev.begin(),rev.end());
        if(cha!='1'){
            ans.push_back(cha);
        }
        ans+=rev;
        return ans;
    }
};