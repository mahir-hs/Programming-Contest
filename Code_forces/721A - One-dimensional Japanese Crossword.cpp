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
    int x,y,z[110],i,j=0,k=0,a=0,b=0;
    string w;
    cin>>x;
    cin>>w;
    for(i=0; i<x; i++)
    {
        if(w[i]=='W')
        {
            continue;
        }
        else if(w[i]=='B')
        {
            b++;
            if(w[i+1]=='W'|| w[i+1]=='\0')
            {
                z[j]=b;
                j++;
                b=0;
                k++;

            }

        }
    }
    cout<<k<<"\n";
    for(i=0; i<k; i++)
    {
        cout<<z[i]<<" ";
    }

}
