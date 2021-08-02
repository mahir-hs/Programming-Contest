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
    int x,y,z=0,i,j,a,b,c[1000],d=0;
    cin>>x>>y;
    for(i=0; i<x; i++)
    {
        cin>>a>>b;
        for(j=a; j<=b; j++)
        {
            gv[j]=1;
        }
    }
    for(i=1; i<=y; i++)
    {
        if(gv[i]==0)
        {
            z++;
            c[d]=i;
            d++;

        }
    }
    cout<<z<<"\n";
    for(i=0; i<z; i++)
    {
        cout<<c[i]<<" ";
    }

}
