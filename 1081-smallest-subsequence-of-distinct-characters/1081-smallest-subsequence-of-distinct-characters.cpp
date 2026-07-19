class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>index(26,-1);
        vector<bool>visit(26,false);
        stack<char>stk;

        for(int i=0;i<s.size();i++) index[s[i]-'a']=i;

         for(int i=0;i<s.size();i++)
         {
            if(visit[s[i]-'a']) continue;
            while(!stk.empty()&&stk.top()>s[i]&&index[stk.top()-'a']>i){
                visit[stk.top()-'a']=false;
                stk.pop();
            }
            stk.push(s[i]);
            visit[s[i]-'a']=true;
         }
         string ans="";
         while(!stk.empty())
         {
            ans=stk.top()+ans;
            stk.pop();
         }
         return ans;
    }
};