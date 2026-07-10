class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char c : tasks) {
            freq[c - 'A']++;
        }
        
        priority_queue<int> pq;
        for (int x : freq) {
            if (x > 0) {
                pq.push(x);
            }
        }
        
        queue<pair<int, int>> q;
        int time = 0;
        
        while (!pq.empty() || !q.empty()) {

            if (pq.empty() && !q.empty()) {
                time = max(time, q.front().second);
            }
            
            if (!q.empty() && q.front().second <= time) {
                pq.push(q.front().first);
                q.pop();
            }
            
            if (!pq.empty()) {
                int f = pq.top();
                pq.pop();
                
                if (f - 1 > 0) {
                    q.push({f - 1, time + n + 1}); 
                }
            }
            
            time++;
        }
        
        return time;
    }
};