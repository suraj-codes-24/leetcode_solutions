class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto [k,v]:mp){
            pq.push(k);
        }

        while(!pq.empty()){
            int curr=pq.top();
            
            for(int i=curr;i<curr+k;i++){
                if(!mp.count(i))return false;
                mp[i]-=1;

                if(mp[i]==0){
                    if(pq.top()!=i)return false;
                    pq.pop();
                }
            }

        }
        return true;
    }
};