class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        
        
        vector<int>component(n,-1);
        component[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=maxDiff){
                component[i]=component[i-1];
            }
            else
            component[i]=component[i-1]+1;
        }
        vector<bool>ans;
        for(auto q:queries){
            if(component[q[0]]==component[q[1]]){
                ans.push_back(true);
            }
            else
            ans.push_back(false);
        }
        return ans;
    }
};