class Solution {
public:
    int lengthOfLastWord(string s) {
        while(s.back()==' ')s.pop_back();
        int count=0;
        for(auto x:s){
            if(x==' '){
                count=0;
            }
            else
            count++;
        }
        return count;
    }
};