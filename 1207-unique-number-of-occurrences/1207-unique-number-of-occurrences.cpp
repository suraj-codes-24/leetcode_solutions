class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        for(auto [k,v]:mp){
            for(auto [k2,v2]:mp){
                if(v==v2&&k!=k2)return false;
            }
        }
        return true;
    }
};