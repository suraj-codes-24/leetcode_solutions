class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;

        if (a) pq.push({a, 'a'});
        if (b) pq.push({b, 'b'});
        if (c) pq.push({c, 'c'});

        string ans = "";

        while(!pq.empty()){
            auto [f,c]=pq.top();
            pq.pop();
            if(ans.size()>=2&&ans[ans.size()-1]==c&&ans[ans.size()-2]==c){
                if(pq.empty())break;
                auto [s,k]=pq.top();
                pq.pop();
                ans+=k;
                s--;
                if(s)pq.push({s,k});
            }
            else{
                ans+=c;
                f--;
                
            }
            if(f)pq.push({f,c});
        
            
        }
        
        return ans;
    }
};