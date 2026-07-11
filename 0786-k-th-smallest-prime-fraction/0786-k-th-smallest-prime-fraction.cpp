class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<tuple<double,int,int>,vector<tuple<double,int,int>>,greater<>> pq;
        int n = arr.size();

         for (int i = 0; i < n - 1; i++) {
            pq.push({1.0*arr[i]/arr[n-1],i,n-1});
        }
        k--;
        while(k--){
            auto [value, i, j] = pq.top();
            pq.pop();
            pq.push({1.0*arr[i]/arr[j-1],i,j-1});
        }
        auto [value, i, j] = pq.top();
        return {arr[i], arr[j]};
    }
};