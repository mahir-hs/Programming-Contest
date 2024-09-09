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
    int x,y,z[1001],i=0,j=0,k=0,a,b,c=0;
    cin>>x>>y;
    while(x--)
    {
        j++;
        cin>>z[i];
        i++;
    }
    for(a=0; a<j-1; a++)
    {
        for(b=0; b<j-a-1; b++)
        {
            if(z[b]<z[b+1])
            {
                int temp=z[b+1];
                z[b+1]=z[b];
                z[b]=temp;
            }
        }
    }
    for(a=0; a<j; a++)
    {
        if(k<y)
        {
            k+=z[a];
            c++;
        }
    }
    cout<<c;
}
