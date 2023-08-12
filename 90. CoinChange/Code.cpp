int solve(vector<int> coins, int amount,vector<int> &dp)
    {
        if(amount == 0)
        {
            return 0;
        }
        if(amount<0)
        {
            return INT_MAX; // logic
        }

        if(dp[amount] != -1)
        {
            return dp[amount];
        }
        int MINI = INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans = solve(coins,amount-coins[i],dp);

            if(ans != INT_MAX) //logic
            {
                MINI = min(MINI,ans+1);
                //dp[i]=MINI;
            }
            
        }
        dp[amount] = MINI;
        return dp[amount];
    }
 
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();

        if(amount == 0)
        {
            return 0;
        }

        if(n==1 && amount<coins[0])
        {
            return -1;
        }
        vector<int> dp(amount+1,-1);
        
        int ans = solve(coins,amount,dp);
        if(ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }