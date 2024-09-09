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
    long long x,y,z,i,j,k=0,a;
    cin>>x>>y>>z;
    i=x+z;
    j=y+z;
    k=abs(i-j);

    if(k>1)
    {

        a=x+y+(z*2);
        a-=k-1;
        cout<<a;
    }
    else
    {
        a=x+y+(z*2);
        cout<<a;
    }

}
