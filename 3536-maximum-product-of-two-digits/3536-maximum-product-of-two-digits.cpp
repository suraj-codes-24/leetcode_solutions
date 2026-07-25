class Solution {
public:
    int maxProduct(int n) {
        int firstmax=-1;
        int secondmax=-1;
        while(n){
            int digit=n%10;
            n/=10;
            if(digit>=firstmax){
                secondmax=firstmax;
                firstmax=digit; 
            }
            else if(digit>secondmax) secondmax=digit;
        }
        return secondmax*firstmax;
    }
};