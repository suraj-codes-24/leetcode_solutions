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

    vector<int> postorder(Node* root) {
        if(!root) return {};
        vector<int>ans;
        stack<Node*>stk;
        stk.push(root);
        while(!stk.empty()){
            auto x=stk.top();
            stk.pop();
            for(auto node:x->children){
                stk.push(node);
            }
            ans.push_back(x->val);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};