class Solution {
public:
    void dfs(vector<int>&nums,vector<bool>&avail,vector<int>&perm,int & count){
        if(perm.size()==nums.size()){
            count++;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(avail[i]){
                    if((nums[i]%(perm.size()+1)==0||(perm.size()+1)%nums[i]==0)){
                    perm.push_back(nums[i]);
                    avail[i]=false;
                    dfs(nums,avail,perm,count);
                    avail[i]=true;
                    perm.pop_back();
                    }
                    
                }
            }
        }
    }
   int countArrangement(int n) {
        vector<int>nums(n);
		for(int i=0;i<n;i++)nums[i]=i+1;
        vector<int>perm;
        vector<bool>avail(n,true);
        int count=0;
        dfs(nums,avail,perm,count);
        return count;
        
    }
};