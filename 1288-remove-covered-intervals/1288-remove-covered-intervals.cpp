class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.rbegin(), intervals.rend(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });
            int c=intervals[0][0];
            int d=intervals[0][1];
            int count=0;
        for(int i=1;i<n;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];

            if(c<=a&&b<=d){
                count++;
                continue;
            }
           c=a;
           d=b;
        }
        return n-count;
        
    }
};