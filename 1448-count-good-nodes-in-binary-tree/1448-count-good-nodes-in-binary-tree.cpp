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
    int count;
    void dfs(TreeNode* root,int maxm){
        if(!root)return;
        if(root->val>=maxm){
            count++;
            maxm=root->val;
        }
        dfs(root->left,maxm);
        dfs(root->right,maxm);
    }
    int goodNodes(TreeNode* root) {
        count=0;
        dfs(root,root->val);
        return count;
    }
};