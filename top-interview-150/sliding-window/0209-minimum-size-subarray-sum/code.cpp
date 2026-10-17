class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int count = n + 1;
        int sum = 0;

        for (int i = 0, j = 0; i < n; i++) {
            sum += nums[i];

            while (sum >= target) {
                count = min(count, i - j + 1);
                sum -= nums[j];
                j++;
            }

            if (count == 1) break;
        }

        return count == n + 1 ? 0 : count;
    }
};
