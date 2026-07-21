class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        
        int count_1=count(s.begin(),s.end(),'1');
        vector<int>active;

        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                int start=i;
                while(i<n&&s[i]=='0'){
                    i++;
                }
                active.push_back(i-start);
            }
            else
            i++;
            
        }
        int max_pair_sum=0;

        for(int i=1;i<active.size();i++){
            max_pair_sum=max(max_pair_sum,active[i]+active[i-1]);
        }
        return max_pair_sum+count_1;
    }
};