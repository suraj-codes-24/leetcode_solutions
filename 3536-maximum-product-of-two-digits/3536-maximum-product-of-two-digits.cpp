class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        while(n!=0){
            int backdigit=n%10;  
            digits.push_back(backdigit);
            n=n/10;
        }
        vector<int>prod;
        for(int i=0;i<digits.size()-1;i++){
            for(int j=i+1;j<digits.size();j++){
                int product=digits[i]*digits[j];
                prod.push_back(product);
            }
        }
        int maximum=prod[0];
        
        for(int i=1;i<prod.size();i++){
            if(prod[i]>maximum){
                maximum=prod[i];
            }
        }
        return maximum;
    


        
        return 0;
    }
};