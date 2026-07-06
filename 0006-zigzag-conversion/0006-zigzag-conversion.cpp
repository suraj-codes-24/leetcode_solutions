class Solution {
public:
    string convert(string s, int numRows) {
        // Optimize space by only allocating exactly what we need.
        // If string is smaller than numRows, we don't need all those rows.
        vector<string> temp(min(numRows, (int)s.size())); 
        
        int i = 0;           // Tracks the current row we are appending to
        bool down = true;    // Flag to determine the direction of traversal

        // Iterate through each character in the input string
        for (auto ch : s) {
            if (down) {
                // Moving downwards: append char and move to the next row below
                temp[i].push_back(ch);
                i++;
                
                // If we hit the bottom boundary (numRows), reverse direction
                if (i == numRows) {
                    down = false;
                    
                    // Safely bounce back up without going out of bounds 
                    // (handles the numRows == 1 edge case)
                    if (i - 2 >= 0)
                        i = i - 2;
                    else
                        i--;    
                }
            }
            else {
                // Moving upwards diagonally: append char and move to the row above
                temp[i].push_back(ch);
                i--;
                
                // If we hit the top boundary (before row 0), reverse direction
                if (i == -1) {
                    down = true;
                    
                    // Safely bounce back down without exceeding the array size
                    if (i + 2 <= numRows - 1)
                        i = i + 2;
                    else
                        i++;
                }
            }
        }
        
        // Compile all the row strings into the final zigzagged result
        string ans = "";
        for (auto str : temp) {
            ans += str;
        }
        
        return ans;
    }
};