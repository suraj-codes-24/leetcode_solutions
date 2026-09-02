class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>&nums,int idx,int &sum,int &target,vector<int>&temp){   
        if(sum>target)return;
        if(sum==target){
            ans.push_back(temp);
        }
        for(int i=idx;i<nums.size();i++){
            sum+=nums[i];
            temp.push_back(nums[i]);
            dfs(nums,i,sum,target,temp);
            sum-=nums[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        int sum=0;
        dfs(candidates,0,sum,target,temp);
        return ans;
        
    }
};