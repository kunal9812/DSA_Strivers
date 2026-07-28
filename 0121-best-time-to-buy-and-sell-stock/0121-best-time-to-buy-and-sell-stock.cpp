class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit, cost, mini;
        maxprofit= cost= 0;
        mini = prices[0];
        for(int i = 1; i < prices.size(); i++){
            cost = prices[i] - mini;
            maxprofit = max(maxprofit, cost);
            mini = min(mini, prices[i]);
        }
        return maxprofit;
    }
};