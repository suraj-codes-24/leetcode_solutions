class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(auto ch:s){
            mp[ch]++;
        }
        for(auto [ch,f]:mp){
            if(f>(s.size()+1)/2) 
            return "";
            pq.push({f,ch});
        }
        string ans="";
       while(pq.size()>=2){
            auto[f1,c1]=pq.top();
            pq.pop();
            auto[f2,c2]=pq.top();
            pq.pop();
            if(f1-1>0){
                pq.push({f1-1,c1});
            }
            if(f2-1>0){
                pq.push({f2-1,c2});
            }
            ans+=c1;
            ans+=c2;
       }
       if(!pq.empty()){
        ans+=pq.top().second;
        pq.pop();
       }
        return ans;
          
    }
};