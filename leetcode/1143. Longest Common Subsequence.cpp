class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {

        int x = text1.size();
        int y = text2.size();
        int arr[x + 1][y + 1];
        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j <= y; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0;
                }
                else if (text1[i - 1] == text2[j - 1])
                {
                    arr[i][j] = 1 + arr[i - 1][j - 1];
                }
                else
                {
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
                }
            }
        }
        return arr[x][y];
    }
};