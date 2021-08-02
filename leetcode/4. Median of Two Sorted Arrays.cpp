class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> v(nums1);
        for (auto &k : nums2)
        {
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        int sz = v.size();
        double ans = 0.0;
        if (sz % 2 == 0)
        {
            int a = v[sz / 2];
            int b = v[(sz / 2) - 1];
            ans = (a + b) / 2.0;
        }
        else
        {
            ans = v[sz / 2];
        }
        return ans;
    }
};