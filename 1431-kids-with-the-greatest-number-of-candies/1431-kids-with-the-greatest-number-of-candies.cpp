class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxm=*max_element(candies.begin(),candies.end());
        cout<<maxm;
        vector<bool>ans(n,false);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxm){
                ans[i]=true;
            }
        }
        return ans;
    }
};