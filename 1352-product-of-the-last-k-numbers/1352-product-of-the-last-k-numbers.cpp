class ProductOfNumbers {
public:
    const int MOD=1e9+7;
    vector<int>v;
    vector<long long>prod;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        v.push_back(num);
        if(prod.empty()){
            prod.push_back(num);
        }
        else if(prod.back()==0){
            prod.clear();
            prod.push_back(num);
        }
        else{
            prod.push_back((prod.back()*num)%MOD);
        }
    }
    
    int getProduct(int k) {
        int s=prod.size();
        if(s-1-k>=0)
        return prod.back()/prod[s-1-k];
        else if(k==prod.size())
        return prod.back();
        else
        return 0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */