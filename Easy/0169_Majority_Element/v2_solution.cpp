class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(auto x:nums){
            if(ans==x)count++;
            else if(count==0){
                ans=x;
                count++;
            }
            else
            count--;
        }
        return ans;
    }
};