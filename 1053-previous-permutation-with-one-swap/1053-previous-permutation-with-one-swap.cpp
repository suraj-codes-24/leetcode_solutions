class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n=arr.size();
        int j=n-2;
        while(j>=0&&arr[j]<=arr[j+1]){
            j--;
        }
        cout<<j;
        if(j==-1) return arr;
        int i=j+1;
        int maxm=-1;
        int idx;
        for(i;i<n;i++){
            if(arr[i]<arr[j]){
                if(arr[i]>maxm)
                    {
                        maxm=arr[i];
                        idx=i;
                    }
            }
        }
        swap(arr[j],arr[idx]);
        return arr;
    }
};