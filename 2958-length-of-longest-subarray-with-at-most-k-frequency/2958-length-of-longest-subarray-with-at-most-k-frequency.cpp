class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int maxx=0;
        int left=0;
        for(int right=0;right<n;right++){
            if(mp[nums[right]]<=k){
                mp[nums[right]]++;
            }
            while(left<n&&mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
            }
            maxx=max(maxx,right-left+1);
        }
        return maxx;
    }
};