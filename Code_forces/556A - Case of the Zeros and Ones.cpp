#include <bits/stdc++.h>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    int x,y,z=0,m=0,n=0,o=0;
    string a;
    cin>>x;
    cin>>a;
    for(int i=0; i<x; i++)
    {
        if(a[i]=='0')
        {
            m++;
        }
        else
            o++;
    }
    if(m>o)
    {
        z = o*2;
        n = x-z;
    }
    else if(m<=o)
    {
        z = m*2;
        n = x-z;
    }
    cout<<n;
}
