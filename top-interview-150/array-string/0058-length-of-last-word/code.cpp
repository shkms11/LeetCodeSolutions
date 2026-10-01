class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool st = false;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]==' ' && st)break;
            else {
                if(s[i] != ' ') st=true;
                

            }
            if(st)
            ans++;
        }

        return ans;
        
    }
};
