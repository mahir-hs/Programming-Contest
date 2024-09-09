#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y[1001],z,i,j,temp=0,k=0;
    cin>>x>>z;
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
    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
            if(y[j]-y[i]<=z)
            {
                k+=2;
            }
    }


    cout<<k;

}
