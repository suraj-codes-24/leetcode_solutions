class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });

        int count=1;
        int y=points[0][1];

        for(int i=1;i<points.size();i++){
            int nx=points[i][0];
            int ny=points[i][1];
            if(nx<=y){
                continue;
            }
            y=ny;
            count++;
        }
        return count;
        
    }
};