class Solution {
public:
    int N,K;
    void dfs(int val,vector<int>&temp,vector<vector<int>>&ans){
        if(temp.size()==K)
        ans.push_back(temp);

        for(int j=val;j<=N;j++){
            temp.push_back(j);
            dfs(j+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets() {
        vector<vector<int>> ans;
        vector<int>temp;
        dfs(1,temp,ans);
        return ans;
    }    

    vector<vector<int>> combine(int n, int k) {
        N=n;
        K=k;
        return subsets();
    }
};