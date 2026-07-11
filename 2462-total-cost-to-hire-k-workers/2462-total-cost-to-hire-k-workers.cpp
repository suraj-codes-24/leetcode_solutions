class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();
        int can=candidates;
        priority_queue<int,vector<int>,greater<>>left;
        priority_queue<int,vector<int>,greater<>>right;
        long long total_cost=0;
       int i=0,j=n-1;
       while(k--){
            while(left.size()<can&&i<=j){
                left.push(costs[i]);
                i++;
            }
            while(right.size()<can&&j>=i){
                right.push(costs[j]);
                j--;
            }
            int lcost=left.empty()?INT_MAX:left.top();
            int rcost=right.empty()?INT_MAX:right.top();
            if(lcost<=rcost){
                total_cost+=lcost;
                left.pop();
            }
            else{
                total_cost+=rcost;
                right.pop();
            }
       }
       return total_cost;
    }
};