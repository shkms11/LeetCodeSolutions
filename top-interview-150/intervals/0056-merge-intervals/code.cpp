class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (auto interval : intervals) {
            // No overlap: add a new interval
            if (ans.empty() || ans.back()[1] < interval[0]) {
                ans.push_back(interval);
            }
            else {
                // Overlap: extend the previous interval
                ans.back()[1] = max(ans.back()[1], interval[1]);
            }
        }

        return ans;
    }
};
