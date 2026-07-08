class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
       int n=nums1.size();
       vector<pair<int,int>>nums(n);
       for(int i=0;i<n;i++){
        nums[i]={nums2[i],nums1[i]};
       }
       sort(nums.rbegin(),nums.rend());
       priority_queue<int,vector<int>,greater<>>pq;
        long long ksum=0;
        for(int i=0;i<k;i++){
            ksum+=nums[i].second;
            pq.push(nums[i].second);
        }
        long long ans=ksum*nums[k-1].first;
       for(int i=k;i<nums.size();i++){
            ksum+=nums[i].second;
            ksum-=pq.top();
            pq.pop();
            pq.push(nums[i].second);
            ans=max(ans,1ll*ksum*nums[i].first);

       }
       return ans;
      
    }
};