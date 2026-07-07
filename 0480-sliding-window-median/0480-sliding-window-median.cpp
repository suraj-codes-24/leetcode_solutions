class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        priority_queue<long long> left_max_heap;
        priority_queue<long long, vector<long long>, greater<>> right_min_heap;
        unordered_map<long long, int> mp;
        vector<double> ans;

        // 1. Put first k elements in left heap
        for(int i = 0; i < k; i++) {
           left_max_heap.push(nums[i]);
        }
        
        // 2. Transfer half to right heap to balance the initial window
        for(int i = 0; i < k / 2; i++) {
            right_min_heap.push(left_max_heap.top());
            left_max_heap.pop();
        }

        int left = 0;

        // 3. Slide the window
        for(int i = k; i <= nums.size(); i++) {
            
            // Build answer vector
            if(k % 2 != 0) {
                ans.push_back(left_max_heap.top());
            } else {
                ans.push_back((left_max_heap.top() + right_min_heap.top()) / 2.0);
            }

            // Break safely before out-of-bounds access
            if(i == nums.size()) break;

            int go = nums[left];
            int come = nums[i];
            left++;
            int balance = 0;
            
            // Mark leaving element as done in map
            mp[go]++;
            
            // Conceptually remove outgoing element
            if(go <= left_max_heap.top()) {
                balance--;
            } else {
                balance++;
            }
            
            // Insert incoming element
            if(!left_max_heap.empty() && come <= left_max_heap.top()) {
                left_max_heap.push(come);
                balance++;
            } else {
                right_min_heap.push(come);
                balance--;
            }
            
            // Rebalance heaps
            if(balance < 0) {
                left_max_heap.push(right_min_heap.top());
                right_min_heap.pop();
                balance++;
            }
            if(balance > 0) {
                right_min_heap.push(left_max_heap.top());
                left_max_heap.pop();
                balance--;
            }
            
            // 4. Lazy Deletion (CRITICAL: Left heap must check debts first!)
            while(!left_max_heap.empty() && mp[left_max_heap.top()]) {
                mp[left_max_heap.top()]--;
                left_max_heap.pop();
            }
            while(!right_min_heap.empty() && mp[right_min_heap.top()]) {
                mp[right_min_heap.top()]--;
                right_min_heap.pop();
            }
        }
        
        return ans;
    }
};