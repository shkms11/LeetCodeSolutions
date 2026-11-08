class Solution {
public:
    bool isValid(string s) {
        int ln = s.size();
        if (ln % 2) return false;

        stack<char> st;

        for (int i = 0; i < ln; i++) {
            // Opening brackets
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            // Closing brackets
            else {
                if (st.empty()) return false;

                if (s[i] == ')' && st.top() != '(') return false;
                if (s[i] == '}' && st.top() != '{') return false;
                if (s[i] == ']' && st.top() != '[') return false;

                st.pop();
            }
        }

        return st.empty();
    }
};
