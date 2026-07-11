class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1,
                                       vector<int>& nums2,
                                       int k) {

        // Min Heap
        // {sum, {index in nums1, index in nums2}}
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<>
        > minHeap;

        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> answer;

        // Keeps track of index pairs already pushed into heap
        set<pair<int, int>> visited;

        // Start with the smallest possible pair
        minHeap.push({nums1[0] + nums2[0], {0, 0}});
        visited.insert({0, 0});

        while (k > 0 && !minHeap.empty()) {

            // Get the smallest sum pair
            auto current = minHeap.top();
            minHeap.pop();

            int i = current.second.first;
            int j = current.second.second;

            // Store the actual values
            answer.push_back({nums1[i], nums2[j]});

            // Move down (next element in nums1)
            if (i + 1 < n && !visited.count({i + 1, j})) {
                minHeap.push({
                    nums1[i + 1] + nums2[j],
                    {i + 1, j}
                });
                visited.insert({i + 1, j});
            }

            // Move right (next element in nums2)
            if (j + 1 < m && !visited.count({i, j + 1})) {
                minHeap.push({
                    nums1[i] + nums2[j + 1],
                    {i, j + 1}
                });
                visited.insert({i, j + 1});
            }

            k--;
        }

        return answer;
    }
};