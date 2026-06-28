class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> cnt(128, 0);

        for(char c : text)
            cnt[c]++;

        return min({
            cnt['b'],
            cnt['a'],
            cnt['n'],
            cnt['l'] / 2,
            cnt['o'] / 2
        });
    }
};