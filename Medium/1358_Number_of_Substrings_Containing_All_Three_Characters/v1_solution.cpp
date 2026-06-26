class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = 0, b = 0, c = 0;
        int count = 0;
        int l = 0;
        
        for(int r = 0; r < s.size(); r++){
            if(s[r] == 'a') a++;
            else if(s[r] == 'b') b++;
            else c++;
            
            // Shrink the window as long as it is valid
            while(a >= 1 && b >= 1 && c >= 1){
                if(s[l] == 'a') a--;
                else if(s[l] == 'b') b--;
                else c--;
                l++;
            }
            
            // Add all valid starting positions for the current 'r'
            // 'l' represents exactly how many valid substrings end at 'r'
            count += l; 
        } 
        return count;
    }
};