class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int ans=0;
        unordered_set<char>set={'a','e','i','o','u'};
        int curr=0;
        for(int i=0;i<k;i++){
            if(set.count(s[i]))curr++;
        }
        ans=max(ans,curr);
        for(int i=k;i<n;i++){
            if(set.count(s[i]))curr++;
            if(set.count(s[i-k]))curr--;
            ans=max(ans,curr);
        }
        return ans;
    }
};