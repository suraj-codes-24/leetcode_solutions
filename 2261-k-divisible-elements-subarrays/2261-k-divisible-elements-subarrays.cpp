class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n=nums.size();
        set<pair<long long,long long>> st;
        const int base1=203;
        const int base2=301;
        const int MOD1=1e9+7;
        const int MOD2=1e9+5;
        int count=0;
        for(int i=0;i<n;i++){
            int atmost=0;
            long long hash1=0;
            long long hash2=0;
            for(int j=i;j<n;j++){
                if(nums[j]%p==0)atmost++;
                if(atmost>k)break;
                hash1=(hash1*base1+nums[j])%MOD1;
                hash2=(hash2*base2+nums[j])%MOD2;
                if(st.count({hash1,hash2})){
                    continue;
                }
                st.insert({hash1,hash2});
                count++;
            }
        }
        return count;
    }
};