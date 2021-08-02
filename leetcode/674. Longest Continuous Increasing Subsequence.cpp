class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {

        int sz = nums.size();
        int cnt = 0, ans = 0;
        for (int i = 0; i < sz; i++)
        {
            if (i == 0 || nums[i - 1] >= nums[i])
            {
                cnt = 0;
            }
            ans = max(++cnt, ans);
        }

        return ans;
    }
};