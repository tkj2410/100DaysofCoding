int maxProfit(vector<int>& prices) {
        
        int profit;
        int min =INT_MAX;
        int total_profit=0;
        for(int i=0; i<prices.size();i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
                
            }
            profit =prices[i] - min;
            if(profit > total_profit)
            {
                total_profit = profit;
            }

        }
        return total_profit;
    }