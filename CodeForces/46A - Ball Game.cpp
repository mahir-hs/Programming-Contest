#include <bits/stdc++.h>
using namespace std;
int gv[10000],n;
string s[22],t[22];
int main()
{
    int x=2,y,z,i;
    cin>>z;
    for(i=2; i<=z; i++)
    {
        cout<<x<<" ";
        x+=i;
        if(x>z)
        {
            x=x-z;
        }
    }
}
