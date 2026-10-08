class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cc=0;
        for(int i=0; i<t.size(); i++){
            if(cc<s.size() && s[cc]==t[i]) cc++;
        }

        return cc==s.size();
        
    }
};
