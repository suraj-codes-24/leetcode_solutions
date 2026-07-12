class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0)return {};
        vector<pair<int,int>>p;
        for(int i=0;i<arr.size();i++){
            p.push_back({arr[i],i});
        }
        sort(p.begin(),p.end());
        vector<int>ans(arr.size());
        ans[p[0].second]=1;
        for(int i=1;i<arr.size();i++){
            if(p[i].first==p[i-1].first){
                ans[p[i].second]=ans[p[i-1].second];
            }
            else
             ans[p[i].second]=ans[p[i-1].second]+1;
        }
        return ans;
    }
};