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
long long  x,y,z[1000000],i=0,j=0,k,p=0,n=0;

int main()
{
    int a,b,c,d;
    cin>>x;

    while(x--)
    {
        cin>>a>>b>>c>>d;
        if(a!=d)
        {
            cout<<a<<" "<<d<<"\n";
        }
        else if(a==d)
        {
            cout<<a<<" ";
            i=min(c,d);
            if(i==a)
            {
                cout<<i+1<<"\n";
            }
            else
                cout<<i<<endl;
        }
    }

}
