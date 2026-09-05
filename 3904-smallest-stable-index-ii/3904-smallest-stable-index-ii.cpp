class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>rightmin(n);
        vector<int>prevmax(n);
        prevmax[0]=nums[0];
        for(int i=1;i<n;i++){
            prevmax[i]=max(nums[i],prevmax[i-1]);
        }
        rightmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rightmin[i]=min(rightmin[i+1],nums[i]);
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            int curr=prevmax[i]-rightmin[i];
            if(curr<=k) return i;

        }
        return ans;
    }
};