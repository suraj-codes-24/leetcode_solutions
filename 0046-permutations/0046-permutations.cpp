class Solution {
public:
    void dfs(vector<int>&nums,vector<bool>&avail,vector<int>&perm,vector<vector<int>>&all){
        if(perm.size()==nums.size()){
            all.push_back(perm);
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
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>all;
        vector<int>perm;
        vector<bool>avail(n,true);
        queue<pair<vector<int>,vector<bool>>>q;
        q.push({perm,avail});
        while(!q.empty()){
            auto[perm,avail]=q.front();
            q.pop();
            if(perm.size()==nums.size()){
                all.push_back(perm);
            }
            else{
                for(int i=0;i<nums.size();i++){
                    if(avail[i]){
                        perm.push_back(nums[i]);
                        avail[i]=false;
                        q.push({perm,avail});
                        avail[i]=true;
                        perm.pop_back();
                    }
                }
            }
        }
        return all;
        
    }
};