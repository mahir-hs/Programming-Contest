#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int x,y,z,i,j,k,a[11],b[11],l=0;
    cin>>x>>y;
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<y; j++)
    {
        cin>>b[j];
    }
    for(k=0; k<x; k++)
    {
        l=0;
        for(z=0; z<y; z++)
        {
            if(a[k]==b[z])
            {
                l=1;
                break;
            }
        }
        if(l==1)
        {
            cout<<a[k]<<" ";
        }
    }
}
