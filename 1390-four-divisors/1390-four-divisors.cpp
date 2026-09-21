class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for (auto x : nums) {
            int count = 0;
            int currsum = 0;

            for (int i = 1; i * i <= x; i++) {
                if (x % i == 0) {
                    count++;
                    currsum += i;

                    if (i * i != x) {
                        count++;
                        currsum += x / i;
                    }
                }
            }

            if (count == 4)
                sum += currsum;
        }

        return sum;
    }
};