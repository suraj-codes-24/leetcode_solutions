class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        vector<int> ans;

        for(int i = 0; i < 9; i++) {
            int num = 0;

            for(int j = i; j < 9; j++) {
                num = num * 10 + (digits[j] - '0');

                if(num >= low && num <= high)
                    ans.push_back(num);

                if(num > high)
                    break;
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};