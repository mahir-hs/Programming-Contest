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
int x,y,z[1000000],i=0,j=0,k,p=1,n=0;

int main()
{
    cin>>x>>y;
    while(x--)
    {
        j++;
        cin>>z[i];
        i++;
    }
    for(k=0; k<j-1; k++)
    {
        if(z[k+1]-z[k]<=y)
        {
            p++;
        }
        else
            p=1;
    }

    cout<<p;

}
