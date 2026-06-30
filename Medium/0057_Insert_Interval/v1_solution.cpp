class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
         intervals.push_back({newInterval[0],newInterval[1]});
        
        vector<vector<int>>merge;
        sort(intervals.begin(),intervals.end());
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