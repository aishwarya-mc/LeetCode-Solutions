class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int sm = prices[0];
       int profit = 0;

       for(int i=1;i<prices.size();i++) {
        sm = min(sm,prices[i]);
        profit = max(profit,prices[i]-sm);
       }
    return profit;
    }
};