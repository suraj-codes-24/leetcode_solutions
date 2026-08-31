class Solution {
public:
    void dfs(vector<int>&nums,vector<bool>&avail,vector<int>&perm,set<vector<int>>&all){
        if(perm.size()==nums.size()){
            all.insert(perm);
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(avail[i]){
                    perm.push_back(nums[i]);
                    avail[i]=false;
                    dfs(nums,avail,perm,all);
                    avail[i]=true;
                    perm.pop_back();
                }
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>>all;
        vector<int>perm;
        vector<bool>avail(n,true);
        dfs(nums,avail,perm,all);
        vector<vector<int>> ans(all.begin(),all.end());
        return ans;
        
    }
};