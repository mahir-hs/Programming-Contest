class Solution
{
public:
    int minDistance(string word1, string word2)
    {

        int a = word1.size();
        int b = word2.size();
        int dp[a + 1][b + 1];
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if (word1[i - 1] == word2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return a + b - 2 * dp[a][b];
    }
};