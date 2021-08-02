#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int x,i,y[1001],z=1,a[1001],b=0;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y[i];

    }
    for(i=0; i<x; i++)
    {
        if(i!=0 && y[i]==1)
        {
            z++;
        }
        if(y[i+1]==1)
        {

            a[b]=y[i];
            b++;

        }
    }
    cout<<z<<"\n";
    for(i=0; i<b; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<y[x-1];

}
