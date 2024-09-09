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
    string a;
    cin>>n;
    cin>>a;
    for(i=n-1; i>=0; i--)
    {
        if(a[i]=='+')
        {
            j++;
        }

        else
        {
            j--;

        }

        k=max(k,j);


    }

    cout<<k;



}
