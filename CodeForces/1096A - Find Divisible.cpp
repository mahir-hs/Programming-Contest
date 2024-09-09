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
        cin>>a>>b;

        if(b%a==0)
        {
            cout<<a<<" "<<b<<endl;
        }
        else if(b%a!=0)
        {
            i=b/a;
            n = a*i;
            cout<<a<<" "<<n<<endl;
        }


    }

}

