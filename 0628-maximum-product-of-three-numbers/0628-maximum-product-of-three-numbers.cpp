class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=INT_MIN;
        int b=INT_MIN;
        int c=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto x:nums){
            if(x>=a){
                c=b;
                b=a;
                a=x;
            }
            else if(x>=b){
                c=b;
                b=x;
            }
            else if(x>=c){
                c=x;
            }

            if(min1>=x){
                min2=min1;
                min1=x;
            }
            else if(min2>=x){
                min2=x;
            }
        }
        return max(a*b*c,min1*min2*a);
    }
};