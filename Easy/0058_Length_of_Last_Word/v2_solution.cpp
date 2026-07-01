class Solution {
public:
    int lengthOfLastWord(string s) {
        while (!s.empty() && s.back() == ' ')
            s.pop_back();

        int count = 0;

        for (char x : s) {
            if (x == ' ')
                count = 0;
            else
                count++;
        }

        return count;
    }
};
