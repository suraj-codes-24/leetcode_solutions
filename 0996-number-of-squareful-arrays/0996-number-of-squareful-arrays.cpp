class Solution {
public:
    int count=0;
    bool isPerfectSquare(long long n) {
        if (n < 0) return false;

        long long r = sqrtl(n);
        return r * r == n;
    }
    void dfs(vector<int>&nums,vector<bool>&avail,vector<int>&perm){
        if(perm.size()==nums.size()){
            count++;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(i>0 && nums[i]==nums[i-1]&&avail[i-1]) continue;
                if(!perm.empty()&&!isPerfectSquare(nums[i]+perm.back())) continue;
                if(avail[i]){
                        perm.push_back(nums[i]);
                        avail[i]=false;
                        dfs(nums,avail,perm);
                        avail[i]=true;
                        perm.pop_back();
                    
                }
            }
        }
    }
    int numSquarefulPerms(vector<int>& nums) {
        int n=nums.size();
        vector<int>perm;
        vector<bool>avail(n,true);
        sort(nums.begin(),nums.end());
        dfs(nums,avail,perm);
        return count;
    }
};