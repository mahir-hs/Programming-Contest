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
    long long x,y,z,i,j,k=1,n=1,a;
    cin>>x>>y;
    for(i=1; i<=min(x,y); i++)
    {
        k*=i;

    }
    cout<<k;
}
