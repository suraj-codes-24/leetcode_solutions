class Solution {
public:
    void dfs(vector<int>& nums,int i,vector<int>&temp,vector<vector<int>>&ans){
        ans.push_back(temp);
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            dfs(nums,j+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        dfs(nums,0,temp,ans);
        return ans;
    }
};