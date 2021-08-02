class Solution
{
public:
    int longestPalindromeSubseq(string s)
    {

        int x = s.size();
        string ss = s;
        reverse(ss.begin(), ss.end());
        int arr[x + 1][x + 1];
        for (int i = 0; i <= x; i++)
        {
            for (int j = 0; j <= x; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0;
                }
                else if (s[i - 1] == ss[j - 1])
                {
                    arr[i][j] = 1 + arr[i - 1][j - 1];
                }
                else
                {
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
                }
            }
        }
        return arr[x][x];
    }
};