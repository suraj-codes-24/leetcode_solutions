class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int>set;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                set.insert(nums[i]^nums[j]);
            }
        }
        unordered_set<int>ans;
        for(auto x:nums){
            for(auto s:set){
                ans.insert(x^s);
            }
        }
        return ans.size();
    }
};