class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //n^2
        vector<int> v;
        int s = nums.size();
        for (int i = 0; i < s - 1; i++)
        {
            for (int j = i + 1; j < s; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
            }
        }
        return v;
    }
};