class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mx=prices[prices.size()-1];
        for(int i=prices.size()-2; i>=0; i--){
            mx = max(mx,prices[i+1]);
            profit = max(profit,mx-prices[i]);
        }


        return profit;
        
    }
};
