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
    long long dfs(TreeNode* root, long long targetSum) {
        if(root == nullptr) return 0;

         long long count = 0;

        if(root->val == targetSum)
            count++;

        count += dfs(root->left, targetSum - root->val);
        count += dfs(root->right, targetSum - root->val);

    return count;
}
    int pathSum(TreeNode* root, int targetSum) {
        long long count=0;
        if(root==nullptr) return count;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto x=q.front();
            count+=dfs(x,targetSum);
            q.pop();

            if(x->left) q.push(x->left);
            if(x->right) q.push(x->right);
        }
        return count;
    }
};