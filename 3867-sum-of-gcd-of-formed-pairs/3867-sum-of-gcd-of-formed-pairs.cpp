class Solution {
public:
    int gcd(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefixGrid(n);
        prefixGrid[0]=nums[0];
        int mxi=nums[0];
        for(int i=1;i<n;i++){
            mxi=max(mxi,nums[i]);
            prefixGrid[i]=gcd(mxi,nums[i]);
        }
        sort(prefixGrid.begin(),prefixGrid.end());
        int i=0;int j=n-1;
        long long sum=0;    
        while(i<j){
            sum+=gcd(prefixGrid[i],prefixGrid[j]);
            i++;
            j--;
        }
        return sum;
    }
};