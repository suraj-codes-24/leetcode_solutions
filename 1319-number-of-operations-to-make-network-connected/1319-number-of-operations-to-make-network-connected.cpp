class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {

        // We need at least n-1 cables to connect n computers
        if(connections.size() < n - 1)
            return -1;

        // Build adjacency list
        vector<vector<int>> adj(n);

        for(auto edge : connections) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);

        int components = 0;

        // Count connected components using BFS
        for(int i = 0; i < n; i++) {

            if(visited[i])
                continue;

            components++;

            queue<int> q;
            q.push(i);
            visited[i] = true;

            while(!q.empty()) {

                int node = q.front();
                q.pop();

                for(int neighbour : adj[node]) {

                    if(!visited[neighbour]) {
                        visited[neighbour] = true;
                        q.push(neighbour);
                    }
                }
            }
        }

        // To connect C components, we need C-1 operations
        return components - 1;
    }
};