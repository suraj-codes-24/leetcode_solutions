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
    int distribute(TreeNode* root,int & sum) {
        if(root==nullptr) return 0;
        int left_coin=(distribute(root->left,sum));
        int right_coin=(distribute(root->right,sum));
        sum+=abs(left_coin)+abs(right_coin);
        return (left_coin+right_coin+root->val-1);
    }
    int distributeCoins(TreeNode* root){
        int sum=0;
        distribute(root,sum);
        return sum;
    }
};