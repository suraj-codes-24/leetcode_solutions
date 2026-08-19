class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        map<int, vector<int>> matrix;

        // Store reserved seats row-wise
        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            matrix[row].push_back(col);
        }

        long long total = 2LL * n;

        // Process only rows having reserved seats
        for (auto &row : matrix) {

            bool f1 = true;  // seats 2,3,4,5
            bool f2 = true;  // seats 4,5,6,7
            bool f3 = true;  // seats 6,7,8,9

            for (int col : row.second) {

                if (col >= 2 && col <= 5)
                    f1 = false;

                if (col >= 4 && col <= 7)
                    f2 = false;

                if (col >= 6 && col <= 9)
                    f3 = false;
            }

            // Both left and right groups are available
            if (f1 && f3) {
                continue;
            }

            // Either left or right group is available
            else if (f1 || f3) {
                total--;
            }

            // Only middle group is available
            else if (f2) {
                total--;
            }

            // No group is available
            else {
                total -= 2;
            }
        }

        return total;
    }
};