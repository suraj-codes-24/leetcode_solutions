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
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        int currh=max(lh,rh);
        return currh+1;
    }
    vector<vector<string>> printTree(TreeNode* root) {
        int height=maxDepth(root);
        vector<vector<string>>ans(height,vector<string>(pow(2,height)-1,""));
        queue<tuple<TreeNode*,int,int>>q;
        ans[0][(pow(2,height)-1)/2]=to_string(root->val);
        q.push({root,0,(pow(2,height)-1)/2});
        while(!q.empty()){
            auto [t,r,c]=q.front();
            q.pop();

            if(t->left){
                
                ans[r+1][c-pow(2,height-r-2)]=to_string(t->left->val);
                q.push({t->left,r+1,c-pow(2,height-r-2)});
            }
            if(t->right){
                ans[r+1][c+pow(2,height-r-2)]=to_string(t->right->val);
                q.push({t->right,r+1,c+pow(2,height-r-2)});
            }

        }
        return ans;
    }
};