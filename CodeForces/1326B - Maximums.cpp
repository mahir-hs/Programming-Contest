#include <bits/stdc++.h>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    long long x,z,y[200000],i=0,a,b=0;
    cin>>x;
    a=x;
    while(x--)
    {
        cin>>z;
        if(z>0)
        {
            b+=z;
            y[i]=b;
            i++;
        }
        else
        {
            y[i] = b+z;
            i++;
        }
    }
    for(int j=0; j<a; j++)
    {
        cout<<y[j]<<" ";
    }
}
