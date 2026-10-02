class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        if(strs.size() <=1) return strs[0];
        for(int i=0,j=0; i<strs[0].size(); i++){
            bool ad = true;
            char cc= strs[0][i];
            
            for(int k=1; k<strs.size(); k++) {
                if( i >= strs[k].size()) return s;
                if(strs[k][i] != cc){
                    return s;
                }
                
            }
            s+=cc;
            
        }
        return s;
        
    }
};
