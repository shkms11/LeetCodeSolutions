class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int ttg=0;
        int tt=0;
        int st = 0;

        for (int i=0; i<cost.size(); i++){
            int diff = gas[i] - cost[i];
            tt += diff;
            ttg += diff;
            if(ttg<0) {
                st = i+1;
                ttg = 0;
            }

        }

        if(tt<0) return -1;

        return st;
      
        
    }
};
