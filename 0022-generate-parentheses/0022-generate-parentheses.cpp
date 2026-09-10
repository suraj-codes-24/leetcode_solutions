class Solution {
public:
    void dfs(int n, string &par, vector<string> &ans,
             int left_par_count, int right_par_count) {

        if (par.size() == 2 * n) {
            ans.push_back(par);
            return;
        }

        // Add '(' if we still have opening brackets left
        if (left_par_count < n) {
            par.push_back('(');
            dfs(n, par, ans, left_par_count + 1, right_par_count);
            par.pop_back();
        }

        // Add ')' only if it won't make the prefix invalid
        if (right_par_count < left_par_count) {
            par.push_back(')');
            dfs(n, par, ans, left_par_count, right_par_count + 1);
            par.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string par = "";

        dfs(n, par, ans, 0, 0);

        return ans;
    }
};