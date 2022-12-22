class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int x = INT_MAX;
        int profit = 0;
        
        for(auto it: prices)
        {
            x = min(it, x);
            profit = max(profit, it-x);
        }
        return profit;
        
    }
};