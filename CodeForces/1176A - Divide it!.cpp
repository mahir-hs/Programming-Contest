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
long long  x,y,z[1000000],i=0,j=0,k,p=1,n=0;

int main()
{
    cin>>x;

    while(x--)
    {
        cin>>y;
        i=0;


        while(y!=1)
        {
            if(y%2==0)
            {
                y=y/2;
                i++;
            }
            else if(y%3==0)
            {
                y=2*y/3;
                i++;
            }

            else if(y%2!=0 && y%5==0)
            {
                y=4*y/5;
                i++;
            }
            else if(y%2!=0 && y%5!=0 && y%3!=0)
            {
                i=-1;
                break;
            }

        }
        cout<<i<<"\n";

    }


}
