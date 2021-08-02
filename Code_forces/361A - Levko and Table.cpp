#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int x,y[1001],z[1001],i,j,k,a,b=0;
    cin>>x>>j;

    for(i=0; i<x; i++)
    {
        for(a=0; a<x; a++)
        {
            if(i==a)
            {
                cout<<j<<" ";
            }
            else
                cout<<0<<" ";
        }

        cout<<"\n";

    }

}
