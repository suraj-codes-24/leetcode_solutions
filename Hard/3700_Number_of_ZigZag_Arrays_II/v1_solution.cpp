class Solution {
    int MOD = 1e9 + 7;
    int k;

    vector<vector<long long>> multiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
        vector<vector<long long>> C(k, vector<long long>(k, 0));
        for (int i = 0; i < k; ++i) {
            for (int m = 0; m < k; ++m) {
                if (A[i][m] != 0) {
                    for (int j = 0; j < k; ++j) {
                        C[i][j] = (C[i][j] + A[i][m] * B[m][j]) % MOD;
                    }
                }
            }
        }
        return C;
    }

public:
    int zigZagArrays(int n, int l, int r) {
        k = r - l + 1;
        
        if (k == 1) return 0;
        
        vector<vector<long long>> M(k, vector<long long>(k, 0));
        for (int row = 0; row < k; ++row) {
            for (int col = k - row; col < k; ++col) {
                M[row][col] = 1;
            }
        }
        
        vector<vector<long long>> res(k, vector<long long>(k, 0));
        for (int i = 0; i < k; ++i) {
            res[i][i] = 1; 
        }
        
        vector<vector<long long>> base = M;
        long long p = n - 1;
        
        while (p > 0) {
            if (p % 2 == 1) {
                res = multiply(res, base);
            }
            base = multiply(base, base);
            p /= 2;
        }
        
        long long total_up_sequences = 0;
        for (int row = 0; row < k; ++row) {
            for (int col = 0; col < k; ++col) {
                total_up_sequences = (total_up_sequences + res[row][col]) % MOD;
            }
        }
        
        return (total_up_sequences * 2) % MOD;
    }
};