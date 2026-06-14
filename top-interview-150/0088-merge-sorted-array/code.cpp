class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        queue<int> q;
        for(int i=0,j=0; i<n+m; i++){
            if(i<m) q.push(nums1[i]);
            if(q.empty()){
                nums1[i] = nums2[j++];

            }
            else if (j==n) {
                nums1[i] = q.front();
                q.pop();
            }
            else {
                if(q.front()<=nums2[j]){
                    nums1[i] = q.front();
                    q.pop();
                }
                else {
                    nums1[i] = nums2[j++];
                }
            }
        }
        
        
    }
};
