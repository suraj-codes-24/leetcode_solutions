class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        int n = tasks.size();
        vector<int> ans;

        // store original index
        for(int i = 0; i < n; i++) {
            tasks[i].push_back(i);
        }

        // sort by enqueue time
        sort(tasks.begin(), tasks.end());

        long long time = 0;
        int i = 0;

        while(i < n || !pq.empty()) {

            // if no task is available, jump time to next task's enqueue time
            if(pq.empty() && time < tasks[i][0]) {
                time = tasks[i][0];
            }

            // add all available tasks
            while(i < n && time >= tasks[i][0]) {
                pq.push({tasks[i][1], tasks[i][2]});
                i++;
            }

            // execute task with smallest processing time
            auto [processTime, index] = pq.top();
            pq.pop();

            time += processTime;
            ans.push_back(index);
        }

        return ans;
    }
};