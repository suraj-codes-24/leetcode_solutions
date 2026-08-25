class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set(nums.begin(),nums.end());
        for(int i=1;;i++){
            if(!set.count(k*i))return k*i;
        }
        return 0;
    }
};