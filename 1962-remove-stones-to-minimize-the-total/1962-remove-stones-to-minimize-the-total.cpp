class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto x:piles)pq.push(x);
        for(int i=0;i<k;i++){
            if(pq.top()==0)return 0;

            int top=pq.top();
            pq.pop();
            pq.push(top-floor(top/2));
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};