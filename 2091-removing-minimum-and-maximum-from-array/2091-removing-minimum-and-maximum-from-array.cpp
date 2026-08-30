class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_idx=-1;
        int max_idx=-1;
        int minn=INT_MAX;
        int maxx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxx){
                maxx=nums[i];
                max_idx=i;
            }
            if(nums[i]<minn){
                minn=nums[i];
                min_idx=i;
            }
        }
        int n=nums.size();
        int d_f=1+max(min_idx,max_idx);
        int d_l=max(n-min_idx,n-max_idx);
        int d_1=1+min_idx+n-max_idx;
        int d_2=1+max_idx+n-min_idx;
        return min({d_f,d_l,d_1,d_2});
    }
};