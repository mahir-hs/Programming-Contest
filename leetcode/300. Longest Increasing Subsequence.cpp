class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        //O(n^2)_LIS

        int sz = nums.size();
        int lis[sz];

        lis[0] = 1;
        for (int i = 1; i < sz; i++)
        {
            lis[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j] && lis[i] <= lis[j])
                {
                    lis[i] = lis[j] + 1;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < sz; i++)
        {
            if (lis[i] > ans)
            {
                ans = lis[i];
            }
        }
        return ans;
    }
};