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
    long long x,y,z,i,j,k,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            cout<<y<<endl;
        }
        else if(x%2==0)
        {
            i=x*y;
            j=(x/2)*z;
            cout<<min(i,j)<<endl;
        }
        else
        {
            x=x-1;
            i=x*y +y;
            j=(x/2)*z + y;
            cout<<min(i,j)<<endl;

        }
    }

}
