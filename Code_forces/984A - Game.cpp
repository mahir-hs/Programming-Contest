#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int x,y,z[1001],a[1001],b,i,j,k,temp;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>z[i];
    }
    b=0;
    for(i=0; i<x-1; i++)
    {
        b=0;
        for(j=0; j<x-i-1; j++)
        {
            if(z[j]>z[j+1])
            {
                temp=z[j];
                z[j]=z[j+1];
                z[j+1]=temp;
                b=1;
            }
        }
        if(b==0)
        {
            break;
        }
    }

    if(x%2!=0)
    {
        cout<<z[x/2];
    }
    else if(x%2==0)
    {
        cout<<z[(x-1)/2];
    }

}
