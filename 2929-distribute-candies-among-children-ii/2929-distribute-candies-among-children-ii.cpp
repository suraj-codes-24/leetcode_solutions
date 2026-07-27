class Solution {
public:
    long long distributeCandies(int n, int l) {
        
        long long count=0;
        for(int i=0;i<=l;i++){
            int left=max(0,n-(i+l));
            int right=min(l,n-i);

            if(left<=right)count+=right-left+1;
        }
        return count;
    }
};