class Solution {
public:
    int numberOfSubstrings(string s) {
        // Initialize with -1 to indicate we haven't seen them yet
        int last_a = -1, last_b = -1, last_c = -1;
        int count = 0;
        
        for(int r = 0; r < s.size(); r++){
            // Update the last seen index for the current character
            if(s[r] == 'a') last_a = r;
            else if(s[r] == 'b') last_b = r;
            else last_c = r;
            
            // If we have seen all three characters at least once
            if(last_a != -1 && last_b != -1 && last_c != -1) {
                // The number of valid substrings ending at 'r' is the 
                // minimum of their last seen indices + 1
                count += min({last_a, last_b, last_c}) + 1;
            }
        }
        return count;
    }
};