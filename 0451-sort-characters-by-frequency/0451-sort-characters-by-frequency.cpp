class Solution {
public:
    string frequencySort(string s) {
        vector<int>freq(256,0);

        for(char c:s){
            freq[c]++;
        }

        priority_queue<pair<int,char>>pq;

        for(int i=0;i<256;i++){
            if(freq[i])
                pq.push({freq[i],(char)i});
        }

        string ans="";

        while(!pq.empty()){
            auto [f,c]=pq.top();
            pq.pop();

            ans += string(f,c);
        }

        return ans;
    }
};