class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int n = s.size();
        int l = 0; // Removed the unused 'r' declaration
        int ans = 0;
        int maxf = 0; // Track the historical max frequency globally
        
        for(int r = 0; r < n; r++){
            freq[s[r] - 'A']++;
            
            // Just compare the current maxf against the char we just added
            maxf = max(maxf, freq[s[r] - 'A']);
            
            // If the window is invalid, shrink it
            while((r - l + 1) - maxf > k){
                freq[s[l] - 'A']--;
                l++;
            }
            
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};