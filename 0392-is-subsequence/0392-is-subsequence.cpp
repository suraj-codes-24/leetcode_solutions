class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;

        while(i<s.size()){
            bool found=false;
            while(j<t.size()){
                if(s[i]==t[j]){
                    j++;
                    found=true;
                    break;
                }
                j++;
            }
            if(!found)return false;
            i++;
        }
        return true;
    }
};