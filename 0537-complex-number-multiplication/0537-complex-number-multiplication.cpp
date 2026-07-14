class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string real1 = "", img1 = "";
        string real2 = "", img2 = "";
        char sym10 ='+',sym20='+';
        char sym11 = '+', sym12 = '+';
        char sym21 = '+', sym22 = '+';

        int i=0;
        if(num1[i]=='-'){
            sym10='-';
            i++;
        }
        // Parse num1
        for (; i < num1.size(); i++) {
            if (num1[i] != '+' && num1[i] != '-') {
                real1 += num1[i];
            } else {
                sym11 = num1[i];
                i++;
                break;
            }
        }

        if (num1[i] == '-') {
            sym12 = '-';
            i++;
        }

        for (; i < num1.size(); i++) {
            if (num1[i] != 'i')
                img1 += num1[i];
        }

        // Parse num2
        i=0;
        if(num2[i]=='-'){
            sym20='-';
            i++;
        }
        for (; i < num2.size(); i++) {
            if (num2[i] != '+' && num2[i] != '-') {
                real2 += num2[i];
            } else {
                sym21 = num2[i];
                i++;
                break;
            }
        }

        if (num2[i] == '-') {
            sym22 = '-';
            i++;
        }

        for (; i < num2.size(); i++) {
            if (num2[i] != 'i')
                img2 += num2[i];
        }
        int r1=stoi(real1);
        int r2=stoi(real2);
        int im1=stoi(img1);
        int im2=stoi(img2);
        if(sym12=='-'){
            im1*=(-1);
        }
        if(sym22=='-'){
            im2*=(-1);
        }
        if(sym10=='-'){
            r1*=(-1);
        }
        if(sym20=='-'){
            r2*=(-1);
        }
        int ansreal=r1*r2+(-1)*(im1*im2);
        int ansimg=(im1*r2)+(im2*r1);
        string ans="";
        ans+=to_string(ansreal);
        
            ans+="+";
        
        ans+=to_string(ansimg);
        ans+="i";


        return ans;
    }
};