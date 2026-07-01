class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % k != 0) {
            return false;
        }
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;

        }
        for(auto[key,val]:mp){
            int curr=key;
            if(val>0){
            for(int i=curr;i<curr+k;i++){
                if(mp[i]<val)return false;
                mp[i]-=val;
            }
            }
        }
        return true;
    }
};