class Solution {
public:
    long long findScore(vector<int>& nums) {
        unordered_set<int>set;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        long long sum=0;
        while(!pq.empty()){
            auto[s,i]=pq.top();
            pq.pop();
            if(!set.count(i)){
                sum+=s;
                set.insert(i);
                if(i+1<nums.size())set.insert(i+1);
                if(i-1>=0)set.insert(i-1);
            }
        }
        return sum;
        
    }
};