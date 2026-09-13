class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> A, B;
        
        // Extract coordinates of all 1s
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1) A.push_back({i, j});
                if (img2[i][j] == 1) B.push_back({i, j});
            }
        }
        
        int ans = 0;
        // 2D count array for the shift vectors. 
        // Max possible shift is n-1 to - (n-1), so size 2n+1 with an offset of n is perfect.
        vector<vector<int>> count(2 * n + 1, vector<int>(2 * n + 1, 0));
        
        for (auto& a : A) {
            for (auto& b : B) {
                int dr = b.first - a.first + n;
                int dc = b.second - a.second + n;
                count[dr][dc]++;
                ans = max(ans, count[dr][dc]);
            }
        }
        
        return ans;
    }
};
