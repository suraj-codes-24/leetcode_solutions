class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<tuple<double,int,int>> pq;
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                pq.push({1.0 * arr[i] / arr[j], i, j});
                if(pq.size()>k)pq.pop();
            }
        }

        auto [value, i, j] = pq.top();
        return {arr[i], arr[j]};
    }
};