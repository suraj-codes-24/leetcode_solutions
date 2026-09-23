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
    int ans;
    void dfs(TreeNode* root,bool goRight,int zig){
        if(!root){
            ans=max(ans,zig-1);
            return;
        }
        if(goRight){
            dfs(root->right,!goRight,zig+1);
            dfs(root->left,goRight,1);
        }
        else{
            dfs(root->left,!goRight,zig+1);
            dfs(root->right,goRight,1);
        }

    }
    int longestZigZag(TreeNode* root) {
        ans=0;
        dfs(root,true,0);
        return ans;
    }
};