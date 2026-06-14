class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int cnt =0; 
       bool two = false;
       int r=1;
      for(int i=1,j=1,z=0; j<nums.size(); ){
        
          if(nums[i-1] != nums[j]){
            nums[i] = nums[j];
            two = false;
            i++;
            j++;
            r++;
          }
          else {
            if(two){
              j++;
            }
            else {
              nums[i] = nums[j];
              two = true;
              i++;
              j++;
              r++;
            }
          }
      }

      return r;
    }
};
