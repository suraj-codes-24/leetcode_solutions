class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (int x : arr) {
            mp[x]++;
        }

        unordered_set<int> freq;

        for (auto [num, count] : mp) {
            if (freq.count(count)) {
                return false;
            }
            freq.insert(count);
        }

        return true;
    }
};