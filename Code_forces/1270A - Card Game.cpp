#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int a,b,c,d,e,f,g,h,x,y,z,big=0,small=0;
    cin>>a;
    while(a--)
    {
        big=0;
        small=0;
        cin>>x>>y>>z;

        while(y--)
        {
            cin>>g;
            if(g>big)
            {
                big=g;
            }

        }
        while(z--)
        {
            cin>>f;
            if(f>small)
            {
                small=f;
            }

        }
        if(big>small)
        {
            cout<<"YES"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }


}
