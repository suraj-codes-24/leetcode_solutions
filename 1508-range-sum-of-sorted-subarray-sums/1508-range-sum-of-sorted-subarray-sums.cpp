class Solution {
public:
const int MOD=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<long long>pq;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum=(sum+nums[j])%MOD;
                pq.push(sum);
                if(pq.size()>right)pq.pop();
            }
        }
        long long ans=0;
        while(pq.size()>=left){
            ans=(ans+pq.top())%MOD;
            pq.pop();
        }
        return  ans;
        
    }
};