class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
        int MOD = 1e9 + 7;
        int k = r - l + 1;
        
        if (n == 1) return k % MOD;
        
        vector<long long> A(k, 1);
        
        for (int step = 2; step <= n; ++step) {
            vector<long long> A_new(k, 0);
            long long current_sum = 0;
            
            for (int i = 1; i < k; ++i) {
                current_sum = (current_sum + A[k - i]) % MOD;
                A_new[i] = current_sum;
            }
            A = A_new;
        }
        
        long long total_sum = 0;
        for (long long x : A) {
            total_sum = (total_sum + x) % MOD;
        }
        
        return (total_sum * 2) % MOD;
    }
};