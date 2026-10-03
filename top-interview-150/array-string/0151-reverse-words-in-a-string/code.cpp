class Solution {
public:
    string reverseWords(string s) {
        
        vector<int>st;
        bool avl=true;
        for(int i=0; i<s.size(); i++){
            if(avl && s[i] != ' '){
                avl=false;
                st.push_back(i);
            }
            else if(!avl && s[i] == ' ') avl=true;
        }
        string rs="";
        for(int i=st.size()-1; i>=0; i--){
            int j=st[i];
            while(s[j] != ' '){
                rs+=s[j++];
                if(j>=s.size()) break;

            }
            if(i>0)rs+=' ';

        }
        return rs;
    }
};
