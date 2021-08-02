class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int dp[amount+1];
        dp[0] = 0;
        int sz= coins.size();
        for(int i=1;i<=amount;i++)
        {
            dp[i] = 1000000;
        }
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<sz;j++)
            {
                if(coins[j]<=i)
                {
                    dp[i] = min(dp[i],1+dp[i-coins[j]]);
                }
            }
        }
        
        if(dp[amount]==1000000)
        {
            return -1;
        }
        else
            return dp[amount];
        
        
    }
};