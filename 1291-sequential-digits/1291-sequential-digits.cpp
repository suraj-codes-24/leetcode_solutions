class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits="123456789";
        int n=digits.size();
        vector<int>ans;
            for(int i=0;i<n;i++){
                string s="";
                for(int j=i;j<n;j++){
                    s+=digits[j];
                    if(stoi(s)<=high&&stoi(s)>=low){
                        ans.push_back(stoi(s));
                    }
                }
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};