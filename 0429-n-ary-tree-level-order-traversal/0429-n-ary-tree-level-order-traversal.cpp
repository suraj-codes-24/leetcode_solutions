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
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        queue<Node*>q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty()){
            int size=q.size();
            vector<int>arr;
            while(size--){
                auto temp=q.front();
                arr.push_back(temp->val);
                q.pop();
                for(auto x:temp->children){
                   q.push(x);
                }
            }
            ans.push_back(arr);
        }  
        return ans;
    }
};