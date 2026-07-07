class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
        long long time=0;
        vector<int>ans;
        int t=0;
         for(auto &x:tasks){
            x.push_back(t);
            t++;
        }
        sort(tasks.begin(),tasks.end());
        for(auto x:tasks){
            cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<"\n";
        }
       for(int i=0;i<tasks.size();){
            if(time<tasks[i][0]){
                time=tasks[i][0];
            }
            while(i < tasks.size() && time >= tasks[i][0]){
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            while(!pq.empty()){
                auto [b,idx]=pq.top();
                pq.pop();
                time+=b;
                ans.push_back(idx);
                while(i < tasks.size() && time >= tasks[i][0]){
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
                }
                
            }
       }
       return ans;
        
    }
};