class Solution
{
public:
    int minDistance(string word1, string word2)
    {

        string s = word1;
        string ss = word2;
        int a = s.size();
        int b = ss.size();
        int dp[a + 1][b + 1];
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = j;
                }
                else if (j == 0)
                {
                    dp[i][j] = i;
                }
                else if (s[i - 1] == ss[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1]));
                }
            }
        }
        return dp[a][b];
    }
};