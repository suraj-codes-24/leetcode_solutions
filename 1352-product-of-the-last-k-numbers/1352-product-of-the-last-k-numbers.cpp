class ProductOfNumbers {
public:
    const int MOD=1e9+7;
    vector<int>v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int s=v.size();
        long long prod=1;
        for(int i=s-1;i>=0&&k>0;i--,k--){
            prod=(prod*v[i])%MOD;
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */