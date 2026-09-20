class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int i=1;
        for(auto c:s){
            int curr='z'-c+1;
            cout<<curr<<" ";
            sum+=curr*i;
            i++;

        }
        return sum;
    }
};