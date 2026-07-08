class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int row=graph.size();
        int source=0;
        int destination=row-1;
        vector<vector<int>>ans;
        queue<vector<int>>q;
        q.push({source});
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            
            if(curr.back()==destination){
                ans.push_back(curr);
            }

            for(int neighbour:graph[curr.back()]){
                auto temp=curr;
                temp.push_back(neighbour);
                q.push(temp);
            }
        }
        return ans;
        
    }
};