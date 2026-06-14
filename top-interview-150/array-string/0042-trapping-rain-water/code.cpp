class Solution {
public:
    int trap(vector<int>& height) {
      long long count =0;

      int start =0;
      int end = height.size();
      end--;
      int lfmx = 0, rtmx = 0;
      while (start<end){
       lfmx = max(lfmx, height[start]);
       rtmx = max (rtmx, height[end]);

       if(lfmx < rtmx){
         count+= lfmx - height[start];
         start++;
       }
       else {
         count += rtmx - height[end];
         end--;
       }

      }
        return count;
    }
};
