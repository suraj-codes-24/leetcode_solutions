class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto x:nums){
            pq.push(x);
        }
        long long ans=0;
        while(!pq.empty()&&k--){
            auto x=pq.top();
            ans+=x;
            pq.pop();
            pq.push((x + 2) / 3); 
        }
        
        
        return ans;
    }
};