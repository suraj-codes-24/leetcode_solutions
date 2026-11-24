class Solution {
public:
    vector<int> parent;

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void uni(int a, int b) {
        int pa = find(a);
        int pb = find(b);
        if (pa == pb) return;
        if (pa < pb) {
            parent[pb] = pa;
        } else {
            parent[pa] = pb;
        }
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        parent.resize(26);
        for (int i = 0; i < 26; i++) {
            parent[i] = i;
        }

        for (int i = 0; i < s1.size(); i++) {
            uni(s1[i] - 'a', s2[i] - 'a');
        }

        for (char &c : baseStr) {
            c = find(c - 'a') + 'a';
        }

        return baseStr;
    }
};