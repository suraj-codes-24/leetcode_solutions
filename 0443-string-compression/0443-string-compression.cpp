class Solution {
public:

    int compress(vector<char>& chars) {
        
        int count=0;
        int n=chars.size();

        for(int i=0;i<n;){
            char curr=chars[i];
            int start=i;
                while(i<n&&chars[i]==curr){
                    i++;
                }
            int num=i-start;
            chars[count]=curr;
            count++;
            if(num<=1) continue; 
            string s=to_string(num);
                for(auto x:s){
                    chars[count]=x;
                    count++;
                }
        }
        return count;
    }
};