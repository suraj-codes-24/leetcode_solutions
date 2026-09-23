class Solution {
public:
    int dp[1001][1001];
    int solve(vector<int>& nums,int prev,int curr){
        if(curr>=nums.size()) return 0;
        int take=0,skip=0;
        if(prev!=-1&&dp[curr][prev]!=-1) return dp[curr][prev];
        if(prev==-1||nums[curr]%nums[prev]==0){
            take=1+solve(nums,curr,curr+1);
        }
        skip=solve(nums,prev,curr+1);
        if(prev!=-1){
            dp[curr][prev]=max(skip,take);
        }
        return max(skip,take);
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp, -1, sizeof(dp));
        vector<int>best;
        int size=solve(nums,-1,0);

        int prev = -1, curr = 0;
        int remaining = size;

        while (curr < nums.size() && remaining > 0) {

            if (prev == -1 || nums[curr] % nums[prev] == 0) {

                int take = 1 + solve(nums, curr, curr + 1);

                if (take == remaining) {
                    best.push_back(nums[curr]);
                    prev = curr;
                    remaining--;
                }
            }

            curr++;
        }
        return best;
    }
};