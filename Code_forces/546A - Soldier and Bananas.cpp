#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int x,y,z,i=1,j=0,k=0;
    cin>>x>>y>>z;
    while(z--)
    {
        j+=x*i;
        i++;
    }
    if(j>y)
    {
        k=j-y;
    }
    cout<<k;
}
