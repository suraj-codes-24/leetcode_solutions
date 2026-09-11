class Solution {
public:
    int count;
    void dfs(vector<int>&nums,vector<bool>&avail,vector<int>&perm){
        if(perm.size()==3){
            count++;
            return;
        }
        
            for(int i=0;i<nums.size();i++){
                if(i>0 && nums[i]==nums[i-1]&&avail[i-1]) continue;
                if(perm.size()==0&&nums[i]==0)continue;
                if(perm.size()==2&&nums[i]%2!=0) continue;
                if(avail[i]){
                        perm.push_back(nums[i]);
                        avail[i]=false;
                        dfs(nums,avail,perm);
                        avail[i]=true;
                        perm.pop_back();
                    
                }
            }
        
    }
    int totalNumbers(vector<int>& digits) {
        count=0;
        vector<int>comb;
        sort(digits.begin(),digits.end());
        vector<bool>avail(digits.size(),true);
        dfs(digits,avail,comb);
        return count;

    }
};