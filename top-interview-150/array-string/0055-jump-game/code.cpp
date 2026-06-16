class Solution {
public:
    bool canJump(vector<int>& nums) {
        int l = nums.size();
        int keep = nums[0];
        bool ans = true;

        if(l<2) return true;
        if(keep == 0) return false;
        
        
        for(int i =1; i<l; i++){
            keep--;
            if(keep == 0 && nums[i] == 0 && i!=l-1) return false;
            if(nums[i]>keep) keep = nums[i];
        }
        
        

        return ans;
        
    }
};
