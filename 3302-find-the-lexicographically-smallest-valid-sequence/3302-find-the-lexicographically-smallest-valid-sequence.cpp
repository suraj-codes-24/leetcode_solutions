class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        vector<int> rightsidelength(n);

        int rightmatch = 0;
        int i = n-1, j = m-1;

        while(i >= 0){
            if(j >= 0 && word1[i] == word2[j]){
                rightmatch++;
                j--;
            }
            rightsidelength[i] = rightmatch;
            i--;
        }

        vector<int> seq;
        bool powerav = true;

        i = 0;
        j = 0;

        while(i < n && j < m){

            if(word1[i] == word2[j]){
                seq.push_back(i);
                j++;
            }

            else if(powerav && i+1 < n && rightsidelength[i+1] >= m-j-1){
                powerav = false;
                seq.push_back(i);
                j++;
            }

            i++;
        }

        if(j == m)
            return seq;

        return {};
    }
};