class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;

        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        long long sum=0;
        while(!pq.empty()){
            auto[s,i]=pq.top();
            pq.pop();
           if (!visited[i]) {
                sum += s;
                visited[i] = true;

                if (i + 1 < nums.size())
                    visited[i + 1] = true;

                if (i - 1 >= 0)
                    visited[i - 1] = true;
            }
        }
        return sum;
        
    }
};