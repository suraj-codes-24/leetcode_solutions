class Solution {
public:
    void dfs(int &k, int &n ,vector<int>&comb,vector<vector<int>>&ans,int idx,int &sum ){
        if(sum>n||comb.size()>k) return;
        if(sum==n&&comb.size()==k){
            ans.push_back(comb);
        }
        for(int i=idx;i<=9;i++){
            sum+=i;
            comb.push_back(i);
            dfs(k,n,comb,ans,i+1,sum);
            sum-=i;
            comb.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>comb;
        vector<vector<int>>ans;
        int sum=0;
        dfs(k,n,comb,ans,1,sum);
        return ans;
    }
};