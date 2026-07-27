class Solution {
public:
    int distributeCandies(int n, int l) {
        int c=0;
        for(int i=0;i<=l;i++){
            for(int j=0;j<=l;j++){
                if(i+j>n)break;
                if(n-(i+j)<=l)c++;
            }
        }
        return c;
    }
};