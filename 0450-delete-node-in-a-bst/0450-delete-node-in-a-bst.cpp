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
    TreeNode* deleteroot(TreeNode* root)
    {
        if(root->right==nullptr) return root->left;
        if(root->left==nullptr) return root->right;

        TreeNode* left=root->left;
        TreeNode* right=root->right;
        while(left->right)
        {
            left=left->right;
        }
        left->right=right;

        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* node=root;
        TreeNode* parent =root;
        if(node==nullptr) return nullptr;

        if(node->val==key)
        {
            return deleteroot(node);

        }
        bool side=true;

        while(node!=nullptr){
            if(node->val==key)
            {
                if(node->left&&node->right)
                {
                    if(side)
                    {
                        parent->left=node->left;
                      
                    }
                    else
                    parent->right=node->left;
                      TreeNode* right=node->right;
                        node=node->left;
                        while(node->right)
                        {
                            node=node->right;
                        }
                        node->right=right;
                }
                else if(node->left==nullptr&&node->right==nullptr)
                {
                    if(side)
                    parent->left=nullptr;
                    else
                    parent->right=nullptr;
                }
                else if(node->left==nullptr)
                {
                    if(side) parent->left=node->right;
                    else
                    parent->right=node->right;
                    
                }
                else
                {
                    if(side) parent->left=node->left;
                    else
                    parent->right=node->left;
                
                }
                break;
                
            }
            else if(node->val>key)
            {   parent =node;
                node=node->left;
                side=true;
            }
            else
            {parent=node;
            node=node->right;
            side=false;
            }

        }
        return root;

        
    }
};