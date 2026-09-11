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
    int unique;
    bool dfs(TreeNode* root){
        if(!root) return true;
        bool left=dfs(root->left);
        bool right=dfs(root->right);
        bool curr=root->val==unique?true:false;

        return left&&right&&curr;
    }
    bool isUnivalTree(TreeNode* root) {
        unique=root->val;
        return dfs(root);
    }
};