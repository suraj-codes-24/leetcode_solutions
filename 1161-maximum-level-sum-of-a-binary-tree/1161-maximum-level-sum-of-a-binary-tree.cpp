class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 1;
        int maxSum = INT_MIN;
        int ans = 1;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            int sum = 0;

            while (n--) {
                TreeNode* temp = q.front();
                q.pop();

                sum += temp->val;

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
            }

            if (sum > maxSum) {
                maxSum = sum;
                ans = level;
            }

            level++;
        }

        return ans;
    }
};