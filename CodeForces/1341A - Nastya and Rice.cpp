#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];
string s[22],t[22];

int main()
{
    int x,y,z,i,j,k,a,b,c,d,e;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c>>d>>e;
        k=0;
        z=a*(b-c);
        y=a*(b+c);
        i=d+e;
        j=d-e;

        if(y<j)
        {
            cout<<"NO"<<"\n";
        }
        else if(z>i)
        {
            cout<<"NO"<<"\n";
        }

        else
            cout<<"YES"<<"\n";

    }


}
