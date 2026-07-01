class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        int x=intervals[0][0];
        int y=intervals[0][1];
        int n=intervals.size();
        int count=0;
        for(int i=1;i<n;i++){
            int nx=intervals[i][0];
            int ny=intervals[i][1];
            if(nx<y){
                count++;
                y=min(y,ny);
                continue;
            }
            x=nx;
            y=ny;

        }
        return count;
    }
};