class Solution {
public:
    int prod(int n){
        int prod=1;
        while(n){
            prod*=n%10;
            n/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        
        for(int num=n;;num++){
            if(prod(num)%t==0) return num;
        }
        return 0;
    }
};