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
    cin>>x;
    y=x%10;
    if(y<=5)
    {
        i=x-y;
    }
    else if(y>5)
    {
        i=x+10-y;
    }
    cout<<i;


}
