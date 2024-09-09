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
    long long x,y,z,i,j=0,k=0,n;
    cin>>x>>y>>z;
    i=y/2;
    n=z/4;
    k=min(x,min(i,n));
    j=k*1+k*2+k*4;
    cout<<j;
}
