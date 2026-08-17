class Solution {
public:
    vector<int>prefix_sum;
    int dp[501][501];
    int solve(vector<int>& stoneValue,int start,int end){
        if(start>=end) return 0;
        int max_sum=0;
        if(dp[start][end]!=-1) return dp[start][end];

        for(int mid=start;mid<end;mid++){
            int left_sum = prefix_sum[mid+1] - prefix_sum[start];
            int right_sum = prefix_sum[end+1] - prefix_sum[mid+1];
            int take=0;
            if(right_sum>left_sum){
                take+=left_sum+solve(stoneValue,start,mid);
            }
            else if (right_sum<left_sum){
                take+=right_sum+solve(stoneValue,mid+1,end);
            }
            else{
                int takel=take;
                int taker=take;
                takel+=left_sum+solve(stoneValue,start,mid);
                taker+=right_sum+solve(stoneValue,mid+1,end);
                take+=max(takel,taker);
            }
            max_sum=max(max_sum,take);
        }
        return dp[start][end]=max_sum;
    }
    int stoneGameV(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        int n=stoneValue.size();
        prefix_sum.resize(n+1,0);
        for(int i=0;i<n;i++){
            prefix_sum[i+1] = prefix_sum[i] + stoneValue[i];
        }
        return solve(stoneValue,0,n-1);
    }
};