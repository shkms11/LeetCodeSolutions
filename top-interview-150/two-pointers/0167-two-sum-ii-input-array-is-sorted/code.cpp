class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> r;

        for (int i = 0; i < numbers.size(); i++) {
            int need = target - numbers[i];

            auto it = lower_bound(numbers.begin() + i + 1, numbers.end(), need);

            if (it != numbers.end() && *it == need) {
                r.push_back(i + 1);
                r.push_back(it - numbers.begin() + 1);
                return r;
            }
        }

        return r;
    }
};
