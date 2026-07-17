class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int,vector<int>,greater<>>pq;
        for(int i=1;i<n;i++){
           int currdiff=heights[i]-heights[i-1];
           if(currdiff<=0){
            continue;
           }
           if(ladders>0){
            pq.push(currdiff);
            ladders--;
           }
           else if(!pq.empty()){
                int prevmin=pq.top();
                if(currdiff<=prevmin&&currdiff<=bricks){
                    bricks-=currdiff;
                }
                else if(bricks>=prevmin){
                        bricks-=prevmin;
                        pq.pop();
                        pq.push({currdiff});  
                }
                else
                return i-1;
           }
           else if(currdiff<=bricks){
            bricks-=currdiff;
           }
           else{
            return i-1;
           }
        }
        return n-1;
    }
};