class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int>st;
       for(auto x:nums){
        if(x>0)st.insert(x);
       }
       int ans=1;

        while(st.count(ans)){
            ans++;
        }
        return ans;

    }
};