class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        string s2 = "";

        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')) {
                
                s2 += tolower(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')s2+=s[i];
        }

        int r = s2.size() - 1;

        while (l < r) {
            if (s2[l++] != s2[r--]) {
                return false;
            }
        }

        return true;
    }
};
