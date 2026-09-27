class Solution {
public:
    void rev(string &s,int i, int j){
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return ;
    }
    string reverseParentheses(string s) {
       stack<int>stk;
       int n=s.size();
       int i=0;
       while(i<n){
            if(s[i]=='('){
                stk.push(i);
            }
            else if(s[i]==')'){
                rev(s,stk.top()+1,i-1);
                stk.pop();
            }
            i++;
       }
       string ans="";
       for(auto x:s){
        if(x!=')'&&x!='(')ans+=x;
       }
       return ans;
    }
};