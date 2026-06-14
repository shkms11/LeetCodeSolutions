class Solution {
public:
    int maxProfit(vector<int>& prices) {
        multiset<int> ms;
        long long prof = 0;
        for(int i = prices.size() - 2; i >= 0; i--) {
            ms.insert(prices[i + 1]);
            int mx = *ms.rbegin();
            if(mx > prices[i]) {
                prof += mx - prices[i];
                //ms.erase(prev(ms.end()));
                ms.clear();
            }
        }
        return prof;
    }
};
