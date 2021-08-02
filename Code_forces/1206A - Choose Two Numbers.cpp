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
    int x,y[300],z,i=0,j[300],k,a=0,b=0,c=0,d,e,f=0,g=0,h;
    cin>>x;

    while(x--)
    {
        b++;
        cin>>y[i];
        i++;
    }
    for(k=0; k<b-1; k++)
    {
        for(a=0; a<b-k-1; a++)
        {
            if(y[a]>y[a+1])
            {
                int temp = y[a];
                y[a]=y[a+1];
                y[a+1]= temp;
            }

        }
    }

    cin>>z;
    while(z--)
    {
        c++;
        cin>>j[g];
        g++;
    }


    for(d=0; d<c-1; d++)
    {
        for(e=0; e<c-d-1; e++)
        {
            if(j[e]>j[e+1])
            {
                f=j[e];
                j[e]=j[e+1];
                j[e+1]=f;
            }
        }
    }

    cout<<y[b-1]<<" "<<j[c-1];


}
