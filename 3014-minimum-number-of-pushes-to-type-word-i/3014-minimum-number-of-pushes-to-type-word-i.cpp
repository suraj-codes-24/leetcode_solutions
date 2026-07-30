class Solution {
public:
    int minimumPushes(string word) {
        int size=word.size();
        int ans=0;
        for(int i=0;i<size;i++){
            ans+=i/8+1;
        }
        return ans;
    }
};