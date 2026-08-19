class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        map<int, vector<int>> matrix;

        unordered_set<int> g1 = {2, 3, 4, 5};
        unordered_set<int> g2 = {4, 5, 6, 7};
        unordered_set<int> g3 = {6, 7, 8, 9};

        long long total = n * 2;

        // Store reserved seats row-wise
        for (auto vec : reservedSeats) {
            int r = vec[0];
            int c = vec[1];

            matrix[r].push_back(c);
        }

        // Only iterate over rows having reserved seats
        for (auto row : matrix) {

            vector<int>& seats = row.second;

            bool f1 = true;
            bool f2 = true;
            bool f3 = true;

            // Group 1: seats 2,3,4,5
            for (auto c : seats) {
                if (g1.count(c)) {
                    f1 = false;
                    break;
                }
            }

            // Group 3: seats 6,7,8,9
            for (auto c : seats) {
                if (g3.count(c)) {
                    f3 = false;
                    break;
                }
            }

            // Group 2: seats 4,5,6,7
            for (auto c : seats) {
                if (g2.count(c)) {
                    f2 = false;
                    break;
                }
            }

            // Both side groups are available
            if (f1 && f3) {
                continue;
            }

            // One side group is available
            else if (f1 || f3) {
                total--;
            }

            // Neither side available, but middle group available
            else if (!f1 && !f3 && f2) {
                total--;
            }

            // No group available
            else {
                total -= 2;
            }
        }

        return total;
    }
};