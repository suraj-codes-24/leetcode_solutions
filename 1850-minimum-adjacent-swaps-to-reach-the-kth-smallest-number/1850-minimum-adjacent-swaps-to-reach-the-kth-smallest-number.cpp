class Solution {
public:
    int getMinSwaps(string num, int k) {
        string temp=num;
        while(k--){
            next_permutation(num.begin(),num.end());
        }
        int count=0;
        for(int i=0; i<temp.size(); i++){
            if(temp[i] != num[i]){
                int j = i + 1;

                while(temp[j] != num[i]){
                    j++;
                }

                while(j > i){
                    swap(temp[j], temp[j-1]);
                    j--;
                    count++;
                }
            }
        }
        return count;
    }
};