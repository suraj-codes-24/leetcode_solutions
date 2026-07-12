class Solution {
public:
const int MOD=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        int ans=0;
        while(1){
            auto[s,i]=pq.top();
            pq.pop();
             if(i+1<n)
            pq.push({s+nums[i+1],i+1});
            if(left<=1){
                ans=(ans+s)%MOD;
            }
            left--;
            right--;
            if(right==0)return ans;
        }
       
        return 0;
    }
};