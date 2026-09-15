class Solution {
public:

    void rev(string &s, int i, int j) {
        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    string reverseWords(string s) {
        if(s.empty())
            return s;
        int n = s.size();
        int i=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                s[j++]=s[i];
            }
            else if(j>0&&s[j-1]!=' '){
                s[j++]=' ';
            }
        }
        if(j > 0 && s[j-1] == ' ')
            j--;

        s.resize(j);
        reverse(s.begin(), s.end());

        int prev = 0;
        n=s.size();

        for(int i = 0; i < n; i++) {

            if(s[i] == ' ') {
                rev(s, prev, i - 1);
                prev = i + 1;
            }
            else if(i == n - 1) {
                rev(s, prev, i);
            }
        }

        return s;
    }
};