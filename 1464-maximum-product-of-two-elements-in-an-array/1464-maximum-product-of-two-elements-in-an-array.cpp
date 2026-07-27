class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=INT_MIN;
        int s=INT_MIN;
        for(auto x:nums){
            if(f<=x){
                s=f;
                f=x;
            }
            else if(s<=x){
                s=x;
            }
        }
        return (f-1)*(s-1);
    }
};