#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y,z,i,a,b=0,c=0,d=0,k=0,q=0,w=0,j;
    cin>>x;
    for(i=0; i<x; i++)
    {

        cin>>y>>z;
        k=0;
        for(j=0; j<y; j++)
        {
            cin>>a;
            k+=a;
        }
        if(k>=z)
        {
            cout<<z<<"\n";
        }
        else if (k<z)
        {
            cout<<k<<"\n";
        }
    }
}
