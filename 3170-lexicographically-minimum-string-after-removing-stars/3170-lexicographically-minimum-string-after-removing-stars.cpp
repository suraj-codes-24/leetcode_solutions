class Solution {
public:
    struct comp {
        auto operator()(auto p1,auto p2){
            if(p1.first==p2.first){
                return p1.second <p2.second;
            }
            return p1.first>p2.first;
        }
    };
    string clearStars(string s) {
        priority_queue<pair<char,int>,vector<pair<char,int>>,comp>pq;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                auto[c,j]=pq.top();
                pq.pop();
                s[j]='*';
            }
            else{
                pq.push({s[i],i});
            }
        }
        string ans="";
        for(auto x:s){
            if(x!='*'){
                ans+=x;
            }
        }
        return ans;
    }
};