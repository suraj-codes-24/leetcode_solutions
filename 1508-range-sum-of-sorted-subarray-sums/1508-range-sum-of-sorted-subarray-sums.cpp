class Solution {
public:
const int MOD=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>vec;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum=(sum+nums[j])%MOD;
               vec.push_back(sum);
            }
        }
        sort(vec.begin(),vec.end());
        long long ans=0;
       for(int i=left-1;i<right;i++){
        ans=(ans+vec[i])%MOD;
       }
        return  ans;
        
    }
};