class Solution {
public:
// int dp[201][201][201];
static const int MOD=1e9+7;
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
}   
    // int solve(vector<int>&nums,int i,int first,int second){
    //     if(i==nums.size()){
    //        bool both_nonempty=first!=0&&second!=0;
    //        bool equal=first==second;
    //        if(both_nonempty&&equal)return 1;
    //        return 0;

    //     }
    //     if(dp[i][first][second]!=-1)return dp[i][first][second];
    //     int skip=(solve(nums,i+1,first,second))%MOD;
    //     int seq1=(solve(nums,i+1,gcd(first,nums[i]),second))%MOD;
    //     int seq2=(solve(nums,i+1,first,gcd(second,nums[i])))%MOD;

    //     return dp[i][first][second]=(skip%MOD+seq1%MOD+seq2%MOD)%MOD;
    // }
    int subsequencePairCount(vector<int>& nums) {
        // memset(dp,-1,sizeof(dp));
        // return solve(nums,0,0,0);
        int size=nums.size();
        int maxgcd=nums[0];

        for(int i=1;i<size;i++){
            maxgcd=max(maxgcd,nums[i]);
        }

        vector<vector<int>>prev(maxgcd+1,vector<int>(maxgcd+1,0));

        for(int i=0;i<maxgcd+1;i++){
            for(int j=0;j<maxgcd+1;j++){
                bool notempty=i!=0&&j!=0;
                bool equal=i==j;
                if(notempty&&equal){
                    prev[i][j]=1;
                }
            }
        }
        for(int i=size-1;i>=0;i--){
             vector<vector<int>>curr(maxgcd+1,vector<int>(maxgcd+1,0));
            for(int j=0;j<maxgcd+1;j++){
                for(int k=0;k<maxgcd+1;k++){
                    int skip=prev[j][k];
                    int take1=prev[gcd(j,nums[i])][k];
                    int take2=prev[j][gcd(k,nums[i])];

                    long long ans=skip;
                    ans=(ans+take1)%MOD;
                    ans=(ans+take2)%MOD;
                    curr[j][k]=ans;

                }
               

            }
             prev=curr;
        }
        return prev[0][0];

        
    }
};