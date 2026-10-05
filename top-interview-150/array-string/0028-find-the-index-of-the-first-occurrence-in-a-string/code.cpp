class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        string s = needle + "#" + haystack;
        vector<int> z(s.size(), 0);

        int l = 0, r = 0;

        for (int i = 1; i < s.size(); i++) {
            if (i <= r)
                z[i] = min(r - i + 1, z[i - l]);

            while (i + z[i] < s.size() &&
                   s[z[i]] == s[i + z[i]]) {
                z[i]++;
            }

            if (i + z[i] - 1 > r) {
                l = i;
                r = i + z[i] - 1;
            }

            if (z[i] == needle.size())
                return i - needle.size() - 1;
        }

        return -1;
    }
};
