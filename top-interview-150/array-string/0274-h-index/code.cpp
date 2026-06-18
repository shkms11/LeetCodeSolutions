class Solution {
public:
    int hIndex(vector<int>& citations) {
        int mx=1007;
     
        sort(citations.begin(),citations.end(), greater<int>());
        int r=1;
        if(citations[0]==0) return 0;
        for(int i=0; i<citations.size(); i++){
            if(citations[i]>=i+1) {
                r = max(r,i+1);
            }
            
        }

        return r;
        
    }
};
