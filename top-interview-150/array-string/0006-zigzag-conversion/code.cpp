class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.size()) return s;
        vector<vector<char>> v(numRows, vector<char>(s.size(), '\0'));

        int row = 0, col = 0;
        int k = 0;

        while (k < s.size()) {
            for (int i = 0; i < numRows && k < s.size(); i++) {
                v[i][col] = s[k++];
            }
            col++; 

            
            for (int i = numRows - 2; i > 0 && k < s.size(); i--) {
                v[i][col++] = s[k++];
            }
        }

        string rs = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < col; j++) {
                if (v[i][j] != '\0') {
                    rs += v[i][j];
                }
            }
        }

        return rs;
    }
};
