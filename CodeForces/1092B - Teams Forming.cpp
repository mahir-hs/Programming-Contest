#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int i,x,y[101],z[101],temp=0,a=0,j;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y[i];
    }
    for(i=0; i<x-1; i++)
    {
        for(j=0; j<x-i-1; j++)
        {
            if(y[j]>y[j+1])
            {
                temp=y[j];
                y[j]=y[j+1];
                y[j+1]=temp;
            }
        }
    }
    for(i=0; i<x; i+=2)
    {
        if(y[i]!=y[i+1])
        {
            a+=y[i+1]-y[i];
        }

    }
    cout<<a;
}
