class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
        int sz = nums.size();
        vector<int> v(sz,1),vv(sz,1);
        for(int i=1;i<sz;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    if(v[j]+1>v[i])
                    {
                        v[i] = v[j]+1;
                        vv[i] = vv[j];
                    }
                    else if(v[j]+1==v[i])
                    {
                        vv[i]+=vv[j];
                    }
                }
            }
        }
        int val = *max_element(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<sz;i++)
        {
            if(val==v[i])
            {
                ans+=vv[i];
            }
        }
        return ans;
        
    }
};