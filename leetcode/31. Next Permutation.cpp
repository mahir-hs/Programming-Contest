class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)
        {
            return;
        }
        int i = n-1;
        
        if(nums[i]>nums[i-1])
        {
            swap(nums[i],nums[i-1]);
            return;
        }
        
        while(i>0 and nums[i]<=nums[i-1])
        {
            --i;
        }
        
        i--;
        
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else
        {
            n--;
            while(n>i and nums[n]<=nums[i])
            {
                n--;
            }
            swap(nums[n],nums[i]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};