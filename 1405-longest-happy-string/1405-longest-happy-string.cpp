class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;

        if (a) pq.push({a, 'a'});
        if (b) pq.push({b, 'b'});
        if (c) pq.push({c, 'c'});

        string ans = "";

        while (pq.size() >= 2) {
            auto [f, ch] = pq.top();
            pq.pop();

            auto [f2, ch2] = pq.top();
            pq.pop();

            if (f != f2) {

                if (f >= 2) {
                    ans += ch;
                    ans += ch;
                    f -= 2;
                } else {
                    ans += ch;
                    f--;
                }

                if (f2 >= 1) {
                    ans += ch2;
                    f2--;
                }

            } else {
                if(!ans.empty()&&ans.back()!=ch){
                if (f >= 2) {
                    ans += ch;
                    ans += ch;
                    f -= 2;
                } else {
                    ans += ch;
                    f--;
                }

                if (f2 >= 2) {
                    ans += ch2;
                    ans += ch2;
                    f2 -= 2;
                } else {
                    ans += ch2;
                    f2--;
                }
                }
                else{
                    if (f2 >= 2) {
                    ans += ch2;
                    ans += ch2;
                    f2 -= 2;
                } else {
                    ans += ch2;
                    f2--;
                }
                if (f >= 2) {
                    ans += ch;
                    ans += ch;
                    f -= 2;
                } else {
                    ans += ch;
                    f--;
                }
                }
            }

            if (f) {
                pq.push({f, ch});
            }

            if (f2) {
                pq.push({f2, ch2});
            }
        }

        if (!pq.empty()) {
            auto [f, ch] = pq.top();
            pq.pop();

            if (f >= 2) {
                ans += ch;
                ans += ch;
                f -= 2;
            } else {
                ans += ch;
                f--;
            }
        }

        return ans;
    }
};