class Solution {
public:
    int maximumLength(vector<int>& nums) {
       unordered_map<long long,int>mp;
       for(auto x:nums){
        mp[x]++;
       }
       int max_len=1;
       if(mp.count(1)){
        int one=mp[1];
        if(one%2==0){
            max_len=max(max_len,one-1);
        }
        else
        max_len=max(max_len,one);
       }
       for(auto [key,val]:mp){
        long long x=key;
        if(x==1||mp[x]<2)continue;
        int curr_len=0;
        while(mp.count(x)&&mp[x]>=2){
            curr_len+=2;
            x*=x;
        }
        if(mp.count(x)&&mp[x]>=1){
            curr_len+=1;
        }
        else
        curr_len-=1;
        max_len=max(max_len,curr_len);
       }
       return max_len;
    }
};