class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string first, second;
        char mid = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] & 1)
                mid = 'a' + i;

            first.append(freq[i] / 2, 'a' + i);
        }

        second = first;
        reverse(second.begin(), second.end());

        if (mid)
            first.push_back(mid);

        first += second;
        return first;
    }
};