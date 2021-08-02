class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {

        int sz = coins.size();
        int dp[amount + 1];
        for (int i = 1; i <= amount; i++)
        {
            dp[i] = 0;
        }
        dp[0] = 1;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 1; j <= amount; j++)
            {
                if (coins[i] <= j)
                {
                    dp[j] += dp[j - coins[i]];
                }
            }
        }

        return dp[amount];
    }
};