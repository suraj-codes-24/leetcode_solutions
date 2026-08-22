class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0;
        int prod=1;
        while(n){
            int rem=n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        return (num%(sum+prod)==0);
    }
};