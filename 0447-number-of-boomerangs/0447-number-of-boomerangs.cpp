class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size();
        int count=0;
        for(int i=0;i<n;i++){
            unordered_map<long long,int>mp;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                int a1=points[i][0],a2=points[i][1];
                int b1=points[j][0],b2=points[j][1];
                long long dist = 1LL * ((a1-b1)*(a1-b1) + (a2-b2)*(a2-b2));
                mp[dist]++;
            }
            for(auto [k,v]:mp){
                if(v>=2){
                    count=count+(v*(v-1));
                }
            }
           
        }
        return count;
        
    }
};