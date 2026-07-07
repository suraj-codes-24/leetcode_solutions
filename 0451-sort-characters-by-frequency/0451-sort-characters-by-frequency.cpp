class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        priority_queue<pair<int,char>>pq;

        for(auto[k,v]:mp){
            pq.push({v,k});
        }
        string ans="";
        while(!pq.empty()){
            auto [f,c]=pq.top();
            pq.pop();

            for(int i=0;i<f;i++){
                ans+=c;
            }
        }
        return ans;

        
    }
};