class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int ndl = needle.size();
        int sz = haystack.size();
        if (ndl == 0)
        {
            return 0;
        }
        int j = 0, cur = 0;
        bool ans = false;
        for (int i = 0; i < sz; i++)
        {
            if (needle[0] == haystack[i])
            {
                j = 0;
                cur = i;
                while (j < ndl)
                {
                    if (needle[j] == haystack[i])
                    {
                        j++;
                        i++;
                    }
                    else
                    {
                        j = 0;
                        i = cur;
                        break;
                    }
                }
            }
            if (j == ndl)
            {
                ans = true;
                break;
            }
            else
            {
                j = 0;
            }
        }
        if (ans)
        {
            return cur;
        }
        else
            return -1;
    }
};