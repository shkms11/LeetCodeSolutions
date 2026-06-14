class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        int z = k;
        vector<int>v,v2;
        if(k>=sz) k%=sz;
        z=k;
        if(k<=0 )return ;
        if(k==1 && sz==1) return ;
        for(int i=0; i<z; i++){
            
            if(i+z<sz)
            v.push_back(nums[i]); 
            
            
            nums[i] = nums[sz-k+i];
            // nums[sz-k+i] = nums[i+k];
            // nums[i+k] = sv;
            
        }
       for(int i=z; i<sz-z; i++){
        
        v.push_back(nums[i]);
       }

       for(int i=0; i<v.size(); i++){
        nums[z+i]=v[i];
       }

        

        
    }
};
