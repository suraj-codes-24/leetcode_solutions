class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int seq=nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                seq+=nums[i];
            }
            else
            break;
        }
        unordered_set<int>set(nums.begin(),nums.end());
        while(1){
            if(set.count(seq)){
                seq++;
            }
            else
            return seq;
        }
        return 0;
    }
};