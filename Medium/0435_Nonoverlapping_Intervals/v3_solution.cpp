class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[1] < b[1];
            });

        int y=intervals[0][1];
        int n=intervals.size();
        int count=0;
        for(int i=1;i<n;i++){
            int nx=intervals[i][0];
            int ny=intervals[i][1];
            if(nx<y){
                count++;
                continue;
            }
            y=ny;

        }
        return count;
    }
};