class Solution {
public:
    int numberOfSubstrings(string s) {
            int a=0;
            int b=0;
            int c=0;
            int l=0;
            int count=0;
        for(int r=0;r<s.size();r++){
            if(s[r]=='a')a++;
            else if(s[r]=='b')b++;
            else c++;
            while(a>=1&&b>=1&&c>=1){
                 if(s[l]=='a')a--;
                else if(s[l]=='b')b--;
                else c--;
                l++;
            }
            count+=l;

        }
    return count;      
    }
};