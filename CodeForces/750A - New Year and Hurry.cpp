#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    long long x,y,z,i,j=0,k=0,n=0;
    cin>>x>>y;
    z=240;
    i=z-y;
    for(k=1; k<=x; k++)
    {
        j+=5*k;
        if(j<=i)
        {
            n++;
        }
        else if(j>i)
        {
            break;
        }
    }
    cout<<n;

}
