class Solution2 {
public:
    int dp[1001][1001];
    int n;
    int solve1(vector<vector<int>>& fruits,int i,int j){
        if(i==j||i>j||i>=n||j>=n||i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=fruits[i][j]+ max({solve1(fruits,i+1,j-1),solve1(fruits,i+1,j),solve1(fruits,i+1,j+1)});
    }
    int solve2(vector<vector<int>>& fruits,int i,int j){
        if(i==j||i<j||i>=n||j>=n||i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=fruits[i][j]+max({solve2(fruits,i-1,j+1),solve2(fruits,i,j+1),solve2(fruits,i+1,j+1)});  
    }
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        n=fruits.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)sum+=fruits[i][j];
            }
        }
        memset(dp,-1,sizeof(dp));
        sum+=solve1(fruits,0,n-1);
        memset(dp,-1,sizeof(dp));
        sum+=solve2(fruits,n-1,0);
        return sum;
    }
};
class Solution {
public:
    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n=fruits.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)sum+=fruits[i][j];
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                 if(i==j||i>j)continue;
                 dp[i][j]=fruits[i][j]+max({dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]}); 
            }
        }
        sum+=dp[0][n-1];
        dp.assign(n+1, vector<int>(n+1, 0));
        for(int j=n-1;j>=0;j--){
             for(int i=0;i<n;i++){
                 if(i==j||i<j)continue;
                 dp[i][j]=fruits[i][j]+max({dp[i-1][j+1],dp[i][j+1],dp[i+1][j+1]}); 
            }
        }
        sum+=dp[n-1][0];
        return sum;


    }
};