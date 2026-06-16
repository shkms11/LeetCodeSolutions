class Solution {
public:
    int jump(vector<int>& nums) {
      int r =0;
      int cc = 0;
      int tt = 0;


      for(int i =0; i<nums.size() -1; i++){
        tt = max (tt, nums[i] +i);

        if(i == cc){
          r++;
          cc = tt;
        }
      }

      return r;
        
        
    }
};
