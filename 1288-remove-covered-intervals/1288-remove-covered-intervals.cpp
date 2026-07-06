class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto a,auto b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });

        int last=intervals[0][1];
        int count=0;

        for(int i=1;i<intervals.size();i++){
            if(last>=intervals[i][1]){
                count++;
                continue;
            }
            last=intervals[i][1];
        }
        return intervals.size()-count;
        
    }
};