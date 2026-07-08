class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const int MOD=1e9+7;
        int n=s.size();
        vector<long long> sum(n+1,0);
        vector<long long> number(n+1,0);
        vector<int>noofdigit(n+1,0);
        vector<long long>pow(n+1,1);
        for(int i=1;i<n+1;i++){
            pow[i]=(pow[i-1]*10)%MOD;
        }

        for(int i=0;i<n;i++){
            number[i+1]=number[i];
            noofdigit[i+1]=noofdigit[i];
            if(s[i]!='0'){
                number[i+1]=(number[i+1]*10+(s[i]-'0'))%MOD;
                noofdigit[i+1]+=1;
            }
            sum[i+1]=sum[i]+(s[i]-'0');
        }
        
        vector<int>ans;

        for(auto query:queries){
            int l=query[0],r=query[1];
            long long curr_sum=sum[r+1]-sum[l];
            long long num_bef=number[l];
            int k=noofdigit[r+1]-noofdigit[l];
            long long x=((number[r+1]-(num_bef*pow[k])%MOD)+MOD)%MOD;
            ans.push_back((int)((x*curr_sum)%MOD));
           
        }
        return ans;
        
    }
};