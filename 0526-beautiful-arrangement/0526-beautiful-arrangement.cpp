class Solution {
public:
    void dfs(vector<int>& nums, vector<bool>& available,
             vector<int>& permutation, int& count) {

        if (permutation.size() == nums.size()) {
            count++;
            return;
        }

        int position = permutation.size() + 1;

        for (int i = 0; i < nums.size(); i++) {

            if (available[i]) {

                // Beautiful arrangement condition
                if (nums[i] % position == 0 || position % nums[i] == 0) {

                    permutation.push_back(nums[i]);
                    available[i] = false;

                    dfs(nums, available, permutation, count);

                    available[i] = true;
                    permutation.pop_back();
                }
            }
        }
    }

    int countArrangement(int n) {
        vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            nums[i] = i + 1;
        }

        vector<int> permutation;
        vector<bool> available(n, true);

        int count = 0;

        dfs(nums, available, permutation, count);

        return count;
    }
};