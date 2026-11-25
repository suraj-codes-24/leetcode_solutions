class Solution {
public:
    vector<long long>hash;
    vector<long long>power;
    const int MOD=1e9+7;
    const int base=100001;
    int n;


    bool check(int len){
        unordered_map<long long,int>mp;
        for(int l=0;l+len<=n;l++){
            int r=l+len;
            long long key=((hash[r]-(hash[l]*power[len])%MOD)%MOD+MOD)%MOD;
            mp[key]++;
        }
        for(auto [k,v]:mp){
            if(v==1)return true;
        }
        return false;
    }
    int smallestUniqueSubarray(vector<int>& nums) {
        n=nums.size();
        hash.assign(n+1,0);
        power.assign(n+1,0);
        power[0]=1;
        for(int i=0;i<n;i++){
            hash[i+1]=(hash[i]*base+nums[i])%MOD;
            power[i+1]=(power[i]*base)%MOD;
        }
        int low=1,high=n;
        while(low<high){
            int mid=low+(high-low)/2;
            if(check(mid)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};