class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        
        
        int a = s1.size();
        int b = s2.size();
        int arr[a+1][b+1];
        for(int i=0;i<=a;i++)
        {
            for(int j=0;j<=b;j++)
            {
                if(i==0 || j==0)
                {
                    arr[i][j] = 0;
                }
                else if(s1[i-1]==s2[j-1])
                {
                    arr[i][j] = arr[i-1][j-1]+s1[i-1];
                }
                else
                {
                    arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
                }
            }
        }
        int sum=0;
        int val = arr[a][b];
        for(auto k:s1)
        {
            sum+=k;
        }
        for(auto k:s2)
        {
            sum+=k;
        }
        return sum-2*val;
        
    }
};