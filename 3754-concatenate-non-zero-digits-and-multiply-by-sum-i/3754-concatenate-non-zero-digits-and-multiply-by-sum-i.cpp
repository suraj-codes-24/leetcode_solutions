class Solution {
public:
    long long sumAndMultiply(int n) {

    long long digit_sum=0;
    long long x=0;
    while(n>0){
        int r=n%10;
        if(r!=0){
            x=x*10+r;
        }
        digit_sum+=r;
        n/=10;
    }  
    long long rev_x=0;
    while(x>0){
        int r=x%10;
        rev_x=rev_x*10+r;
        x/=10;
    }  
    return digit_sum*rev_x; 
    }
};