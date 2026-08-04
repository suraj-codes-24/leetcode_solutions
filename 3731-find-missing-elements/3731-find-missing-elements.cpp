class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx=INT_MIN;
        int minn=INT_MAX;
        unordered_set<int>set;
        for(auto x:nums){
            maxx=max(maxx,x);
            minn=min(minn,x);
            set.insert(x);
        }
        vector<int>ans;
        for(int i=minn+1;i<=maxx-1;i++){
            if(!set.count(i)) ans.push_back(i);
        }
        
        return ans;
    }
};