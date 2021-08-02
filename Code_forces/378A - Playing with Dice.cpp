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
    int x,y,z,i,j,a=0,b=0,c=0;
    cin>>x>>y;
    for(i=1; i<=6; i++)
    {
        if(abs(i-x)<abs(i-y))
        {
            a++;
        }
        else if(abs(i-x)>abs(i-y))
        {
            b++;
        }
        else
            c++;
    }
    cout<<a<<" "<<c<<" "<<b;
}
