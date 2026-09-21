class Solution {
public:
    bool solve(string s, string t,int i, int j){
        if(i>=s.size()) return true;
        if(j>=t.size()) return false;

        bool a=false,b=false;
        if(s[i]==t[j]){
           a= solve(s,t,i+1,j+1);
        }
        else{
            b= solve(s,t,i,j+1);
        }
        return a||b;
    }
    bool isSubsequence(string s, string t) {
        return solve(s,t,0,0);
    }
};