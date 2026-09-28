class Solution {
public:
    int maxDepth(string s) {
        stack<char>stk;
        int ans=0;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]=='('){
                stk.push(s[i]);
            }
            else if(s[i]==')'){
                stk.pop();
            }
            int t=stk.size();
            ans=max(ans,t);
            i++;
        }
        return ans;
    }
};