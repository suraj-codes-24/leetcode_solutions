class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merge;
        merge.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1;i<intervals.size();i++){
            if(merge.back()[1]>=intervals[i][0]){
                merge.back()[1]=max(merge.back()[1],intervals[i][1]);
            }
            else
            merge.push_back({intervals[i][0],intervals[i][1]});
        }
        return merge;

    }
};