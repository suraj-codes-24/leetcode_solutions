class Solution {
public:

    struct Compare {
        bool operator()(pair<int,string>& a, pair<int,string>& b) {

            if(a.first == b.first) {
                return a.second < b.second; // larger lexicographically has higher priority to remove
            }

            return a.first > b.first; // smaller frequency has higher priority to remove
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int> mp;

        for(auto s: words)
            mp[s]++;

        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare> pq;

        for(auto [word,f]: mp) {
            pq.push({f,word});

            if(pq.size() > k)
                pq.pop();
        }

        vector<string> ans;

        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};