class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;
        for(auto ch:s){
            mp[ch]++;
        }
        for(auto [ch,f]:mp){
            pq.push({f,ch});
        }
        string ans="";
        queue<pair<int,char>>q;
        while(!pq.empty()||!q.empty()){

           if (pq.empty() && !q.empty()){
            if(ans.back()==q.front().second){
                return "";
            }
           }
             if(!q.empty()&&ans.back()!=q.front().second){
                pq.push(q.front());
                q.pop();
            }
            if (!pq.empty()) {
                int f = pq.top().first;
                int c=  pq.top().second;
                ans+=c;
                pq.pop();
                
                if (f - 1 > 0) {
                    q.push({f - 1, c}); 
                }
            }
            
            
        }
        return ans;
        
        
    }
};