class Solution {
public:
    void dfs(int start, int n, int k,
             vector<int>& temp,
             vector<vector<int>>& ans) {

        if(temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        for(int j = start; j <= n; j++) {
            temp.push_back(j);

            dfs(j + 1, n, k, temp, ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;

        dfs(1, n, k, temp, ans);

        return ans;
    }
};