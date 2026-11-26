class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, curr_profit, buy_price = prices[0];
        for(int i = 1; i < prices.size() ; i++) {
            if(buy_price > prices[i]) {
                buy_price = prices[i];
            }
            curr_profit = prices[i] - buy_price;
            max_profit = max(max_profit, curr_profit);
        }
        return max_profit;
    }
};