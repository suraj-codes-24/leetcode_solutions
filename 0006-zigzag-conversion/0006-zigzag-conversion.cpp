class Solution {
public:
    string convert(string s, int numRows) {

    vector<string>temp(numRows);
    int i=0;
    bool down=true;
        for(auto ch:s){
            if(down){
                temp[i].push_back(ch);
                i++;
                if(i==numRows){
                    down=false;
                    if(i-2>=0)
                        i=i-2;
                    else
                    i--;    
                }
            }
            else{
                temp[i].push_back(ch);
                i--;
                if(i==-1){
                    down=true;
                    if(i+2<=numRows-1)
                    i=i+2;
                    else
                    i++;
                }
            }
        }
        string ans="";
        for(auto s:temp){
            ans+=s;
        }
        return ans;
    }
};