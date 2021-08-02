class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int sz = nums.size();
        int cur = 0;
        if (sz == 0)
            return 0;
        for (int i = 0; i < sz; i++)
        {
            if (nums[cur] == nums[i])
            {
                continue;
            }
            else
            {
                nums[++cur] = nums[i];
            }
        }

        return cur + 1;
    }
};