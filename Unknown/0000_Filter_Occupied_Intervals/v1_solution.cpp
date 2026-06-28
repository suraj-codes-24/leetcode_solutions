class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        vector<vector<int>>merge;
        merge.push_back({occupiedIntervals[0][0],occupiedIntervals[0][1]});
        for(int i=1;i<occupiedIntervals.size();i++){
            if(merge.back()[1]+1>=occupiedIntervals[i][0]){
                merge.back()[1]=max(occupiedIntervals[i][1],merge.back()[1]);
            }else{
                merge.push_back({occupiedIntervals[i][0],occupiedIntervals[i][1]});
            }
        }
        vector<vector<int>>result;
        for(auto &x:merge){
            if(x[1]<freeStart){
                result.push_back(x);
            }
            else if(x[0]>freeEnd){
                result.push_back(x);
            }
            else{
                if(x[0]<freeStart){
                    result.push_back({x[0],freeStart-1});
                }
                if(x[1]>freeEnd)
                {
                    result.push_back({freeEnd+1,x[1]});
                }
            }
            
        }
        return result;
    }
};