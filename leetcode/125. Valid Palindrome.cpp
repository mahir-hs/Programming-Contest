class Solution
{
public:
    bool isPalindrome(string s)
    {

        string ss = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > 64 && s[i] < 91 || s[i] > 96 && s[i] < 123 || s[i] > 47 && s[i] < 58)
            {
                ss += s[i];
            }
        }
        transform(ss.begin(), ss.end(), ss.begin(), ::tolower);
        string sss = ss;
        reverse(sss.begin(), sss.end());
        if (sss == ss)
        {
            return true;
        }
        else
            return false;
    }
};