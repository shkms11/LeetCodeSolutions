class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sz = nums.size();

          vector<int> preff(sz);
    vector<int> suff(sz);
    vector<int> ans(sz);
        suff[sz-1] = nums[sz-1];
        preff[0] = nums[0];

        for(int i=1, j=sz-2; i<sz; i++,j--){
            preff[i] = nums[i]*preff[i-1];
            suff[j] = nums[j]*suff[j+1];
        }

        ans[0]= suff[1];
        ans[sz-1]=preff[sz-2];

        for(int i=1; i<sz-1; i++){
            ans[i]= preff[i-1]*suff[i+1];

        }

        return ans;

        
    }
};
