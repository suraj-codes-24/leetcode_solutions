/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int dfs(Node* root){
        int maxm=0;
        for(auto child:root->children){
            maxm=max(maxm,dfs(child));
        }
        return 1+maxm;
    }
    int maxDepth(Node* root) {
        if(!root) return 0;
        return dfs(root);
    }
};