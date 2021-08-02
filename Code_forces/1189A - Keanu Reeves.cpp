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
    int x,y,z,i,l=0,k=0,j=0,m=0,o,p,q,one=0,zero=0;
    string a,b,c;
    cin>>x;
    cin>>a;
    for(i=0; i<x; i++)
    {
        if(a[i]=='1')
        {
            one++;
        }
        else
            zero++;

    }
    if(one!=zero)
    {
        cout<<1<<endl<<a<<endl;
        return 0;
    }
    cout<<2<<endl;
    cout<<a[0]<<" ";
    for(i=1; i<x; i++)
    {
        cout<<a[i];
    }

}
