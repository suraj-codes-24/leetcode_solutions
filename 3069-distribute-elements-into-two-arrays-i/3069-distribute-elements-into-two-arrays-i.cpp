class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1,arr2;
        
        for(auto x:nums){
            if(arr1.empty()){
            arr1.push_back(x);
            continue;
            }

            else if(arr2.empty()){
                arr2.push_back(x);
                continue;
            }
            if(arr1.back()>=arr2.back()){
                arr1.push_back(x);
            }
            else{
                arr2.push_back(x);
            }
        }
        vector<int>ans=arr1;
        ans.insert(ans.end(), arr2.begin(), arr2.end());      
        return ans;
    }
};