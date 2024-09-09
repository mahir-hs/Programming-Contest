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
    long long x,y,z,i,j,k;
    cin>>x>>y>>z;
    cout<<min(z,min(y,x+y-z));
}
