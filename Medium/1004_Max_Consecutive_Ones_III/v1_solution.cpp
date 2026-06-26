class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int l=0;
        pair<int,int>f;
        f.first=0;
        f.second=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0)f.first++;
            else f.second++;

            while(r-l+1-f.second>k){
                if(nums[l]==0)f.first--;
            else f.second--;
            l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
        
    }
};