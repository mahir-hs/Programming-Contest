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
    cin>>n;
    if((n-2)%3==0)
    {
        cout<<1<<" "<<2<<" "<<n-3;
    }
    else if((n-2)%3!=0)
    {
        cout<<1<<" "<<1<<" "<<n-2;
    }

}
