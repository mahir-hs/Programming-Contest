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
    int x,y[101],z[101],i=0,j,k,l,a=0,b=0;
    cin>>x;
    while(x--)
    {
        cin>>y[i]>>z[i];
        i++;
    }
    for(k=0; k<i; k++)
    {
        for(l=0; l<i; l++)
        {
            if(k==l)
            {
                continue;
            }

            else if(y[k]==z[l])
            {
                a++;
            }

        }
    }

    cout<<a;

}
