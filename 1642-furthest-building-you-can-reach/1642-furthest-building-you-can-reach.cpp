class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int,vector<int>,greater<>>pq;
        for(int i=1;i<n;i++){
           int currdiff=heights[i]-heights[i-1];
           if(currdiff>0){
            pq.push(currdiff);
           }
           if(pq.size()>ladders){
            int diff=pq.top();
            pq.pop();
            if(diff<=bricks){
                bricks-=diff;
            }
            else
            return i-1;
           }
        }
        return n-1;
    }
};