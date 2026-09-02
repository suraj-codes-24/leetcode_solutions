class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        //try to make odd
        bool odd=true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2!=0)continue;
            bool changed=false;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(abs(nums1[i]-nums1[j])%2!=0){
                    changed=true;
                    break;
                }
            }
            if(!changed){
                odd=false;
                break;
            }
        }
        //try to make even
        bool even =true;
        for(int i=0;i<n;i++){
            if(nums1[i]%2==0)continue;
            bool changed=false;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if((nums1[i]-nums1[j])%2==0){
                    changed=true;
                    break;
                }
            }
            if(!changed){
                even=false;
                break;
            }
        }
        return even||odd;
    }
};