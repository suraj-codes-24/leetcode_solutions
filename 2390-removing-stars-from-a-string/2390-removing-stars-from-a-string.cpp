class Solution {
public:
    string removeStars(string s) {
        string t="";
        for(auto ch:s){
            if(ch=='*') t.pop_back();
            else
            t.push_back(ch);
        }
        return t;
    }
};