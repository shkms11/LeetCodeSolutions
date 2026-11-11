
//done 
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i = 0; i < tokens.size(); i++) {
            string s = tokens[i];

            if(s == "+" || s == "-" || s == "*" || s == "/") {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                int tmp = 0;

                if(s == "+") tmp = a + b;
                else if(s == "-") tmp = a - b;
                else if(s == "*") tmp = a * b;
                else tmp = a / b;

                st.push(tmp);
            }
            else {
                st.push(stoi(s));
            }
        }

        return st.top();
    }
};
