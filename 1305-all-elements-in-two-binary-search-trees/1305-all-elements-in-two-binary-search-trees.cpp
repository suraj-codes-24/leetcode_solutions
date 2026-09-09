/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& arr) {
        if (!root) return;

        dfs(root->left, arr);
         arr.push_back(root->val);
        dfs(root->right, arr);
    }
    void merge(vector<int>&ans,vector<int>&first,vector<int>&second){
        int i=0,j=0;
        while(i<first.size()&&j<second.size()){
            if(first[i]<second[j]){
                ans.push_back(first[i]);
                i++;
            }
            else{
                ans.push_back(second[j]);
                j++;
            }
        }
        while(i<first.size()){
            ans.push_back(first[i]);
            i++;
        }
        while(j<second.size()){
            ans.push_back(second[j]);
            j++;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>first,second;
        vector<int>ans;
        dfs(root1,first);
        dfs(root2,second);
        merge(ans,first,second);
        return ans;
    }
};