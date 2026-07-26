class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int a= nums[0]*nums[1]*nums[2];
        int b=nums[0]*nums[nums.size()-2]*nums.back();
        return max(a,b);
    }
};