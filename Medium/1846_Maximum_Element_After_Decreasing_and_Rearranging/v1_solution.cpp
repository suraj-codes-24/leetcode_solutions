class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        int curr=1;
        int maxx=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-curr>1){
                curr=curr+1;
            }else
            curr=arr[i];
            maxx=max(maxx,curr);
        }
        return maxx;
        
    }
};