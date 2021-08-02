#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int x,y,z,a,b,c,d=0,hig,low,mid;
    cin>>x>>y>>z;
    if(x>y)
    {
        mid=x;
        low=y;
    }
    else
    {
        mid=y;
        low=x;
    }
    if(mid>z)
    {
        hig=mid;
        if(low>z)
        {
            mid=low;
            low=z;
        }
        else
        {
            mid=z;
        }
    }
    else
        hig=z;
    a=low+mid;
    if(a>hig)
    {
        cout<<0;
    }
    else if(a<=hig)
    {
        b=hig-a;
        cout<<b+1;
    }
}
