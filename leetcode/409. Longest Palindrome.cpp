class Solution
{
public:
    int longestPalindrome(string s)
    {

        int a = s.size();
        map<char, int> m;
        int cnt = 0, ans = 0;
        for (int i = 0; i < a; i++)
        {
            m[s[i]]++;
        }
        for (auto k : m)
        {
            if (k.second % 2 == 0)
            {
                ans += k.second;
            }
            else
            {
                cnt = 1;
                ans += k.second - 1;
            }
        }
        return ans + cnt;
    }
};