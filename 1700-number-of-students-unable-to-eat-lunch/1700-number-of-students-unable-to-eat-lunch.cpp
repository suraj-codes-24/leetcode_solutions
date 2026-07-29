class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt[2] = {0};

        for(int s : students)
            cnt[s]++;

        for(int s : sandwiches) {
            if(cnt[s] == 0)
                break;

            cnt[s]--;
        }

        return cnt[0] + cnt[1];
    }
};