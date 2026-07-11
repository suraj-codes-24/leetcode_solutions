class Solution {
public:
    // Custom hash for pair<int, int>
    struct PairHash {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };

    vector<vector<int>> kSmallestPairs(vector<int>& nums1,
                                       vector<int>& nums2,
                                       int k) {

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<>
        > minHeap;

        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> ans;

        // unordered_set with custom hash
        unordered_set<pair<int, int>, PairHash> visited;

        // Start from (0,0)
        minHeap.push({nums1[0] + nums2[0], {0, 0}});
        visited.insert({0, 0});

        while (k > 0 && !minHeap.empty()) {

            auto current = minHeap.top();
            minHeap.pop();

            int i = current.second.first;
            int j = current.second.second;

            ans.push_back({nums1[i], nums2[j]});

            // Move down
            if (i + 1 < n && !visited.count({i + 1, j})) {
                minHeap.push({nums1[i + 1] + nums2[j], {i + 1, j}});
                visited.insert({i + 1, j});
            }

            // Move right
            if (j + 1 < m && !visited.count({i, j + 1})) {
                minHeap.push({nums1[i] + nums2[j + 1], {i, j + 1}});
                visited.insert({i, j + 1});
            }

            k--;
        }

        return ans;
    }
};