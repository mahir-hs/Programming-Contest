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
    cin>>x;

    while(x--)
    {
        cin>>y;
        n=0;
        j=0;
        p=0;
        i=0;
        while(y--)
        {
            cin>>k;
            i+=k;
            n++;
        }
        cout<<(i+n-1)/n<<"\n";
    }

}
