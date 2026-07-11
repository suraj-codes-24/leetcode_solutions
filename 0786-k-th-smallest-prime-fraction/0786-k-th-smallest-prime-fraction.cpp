class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<tuple<double,int,int>> frac;
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                frac.push_back({1.0 * arr[i] / arr[j], i, j});
            }
        }

        sort(frac.begin(), frac.end());

        auto [value, i, j] = frac[k - 1];
        return {arr[i], arr[j]};
    }
};