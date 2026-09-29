class Solution {
public:
    int romanToInt(string s) {
        vector<int> v(128, 0);

        v['I'] = 1;
        v['V'] = 5;
        v['X'] = 10;
        v['L'] = 50;
        v['C'] = 100;
        v['D'] = 500;
        v['M'] = 1000;

        vector<int> v2;

        for (int i = 0; i < s.size(); i++) {
            v2.push_back(v[s[i]]);
        }

        int ans = v2[0];

        for (int i = 1; i < v2.size(); i++) {
            if (v2[i - 1] < v2[i]) {
                ans += v2[i] - 2 * v2[i - 1];
            } else {
                ans += v2[i];
            }
        }

        return ans;
    }
};
