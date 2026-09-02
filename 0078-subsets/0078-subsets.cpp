class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0) return {{}};
        int last=nums.back();
        nums.pop_back();
        vector<vector<int>>s1=subsets(nums); //call for n-1 elem
        vector<vector<int>>s2;
        for(auto x:s1){
            x.push_back(last);
            s2.push_back(x);
        }
         vector<vector<int>>ans=s1;
         ans.insert(ans.end(),s2.begin(),s2.end());
         return ans;

    }
};