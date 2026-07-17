class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        
        // Min-heap to keep track of all the jumps where we've used a ladder.
        // It will keep the smallest jumps at the top.
        priority_queue<int, vector<int>, greater<>> pq;
        
        for(int i = 1; i < n; i++) {
           int currdiff = heights[i] - heights[i-1];
           
           // Step 1: The Optimistic Move
           // If we need to jump up, automatically assume we use a ladder.
           if(currdiff > 0) {
            pq.push(currdiff);
           }
           
           // Step 2: The Reality Check
           // If the number of jumps in our heap exceeds our actual ladder count,
           // we need to retroactively pay for the smallest jump using bricks.
           if(pq.size() > ladders) {
            
            // Extract the smallest jump we've made so far
            int diff = pq.top();
            pq.pop();
            
            // Step 3: The Fix
            // Do we have enough bricks to cover this smallest jump?
            if(diff <= bricks) {
                bricks -= diff;
            } 
            // If we don't even have enough bricks for the smallest jump, 
            // we are completely out of resources. Game over.
            else {
                return i - 1;
            }
           }
        }
        
        // If the loop finishes, we successfully reached the final building!
        return n - 1;
    }
};