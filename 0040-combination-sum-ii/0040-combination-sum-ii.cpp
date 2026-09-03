class Solution {
public:
    void dfs(vector<int>&nums,int & target,int & sum, vector<vector<int>>&answer,vector<int>&comb,int idx){
        if(sum>target) return;
        if(sum==target){
            answer.push_back(comb);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            if(i>idx&&nums[i]==nums[i-1])continue;
            sum+=nums[i];
            comb.push_back(nums[i]);
            dfs(nums,target,sum,answer,comb,i+1);
            sum-=nums[i];
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>answer;
        vector<int>comb;
        int sum=0;
        dfs(candidates,target,sum,answer,comb,0);
        return answer;
    }
};