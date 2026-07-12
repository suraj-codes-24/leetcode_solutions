class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=capital.size();
        vector<pair<int,int>>cap_prof;
        for(int i=0;i<n;i++){
            cap_prof.push_back({capital[i],profits[i]});
        }
        sort(cap_prof.begin(),cap_prof.end());

        priority_queue<int>pq;
        int i=0;
        while(k--){
           while(i<n&&w>=cap_prof[i].first){
            pq.push(cap_prof[i].second);
            i++;
           }
           if(pq.empty())break;
            w+=pq.top();
            pq.pop();
        }
        return w;

    }
};