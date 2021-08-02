#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y[4],z[1001],i=0,j,k;

    for(i=0; i<4; i++)
    {
        cin>>y[i];
    }
    for(i=0; i<4-1; i++)
    {
        for(j=0; j<4-i-1; j++)
        {
            if(y[j]>y[j+1])
            {
                int temp=y[j];
                y[j]=y[j+1];
                y[j+1]=temp;
            }
        }
    }

    if(y[0]+y[3]==y[1]+y[2])
    {
        cout<<"YES";
    }
    else if(y[3]-y[0]==y[1]+y[2])
    {
        cout<<"YES";
    }
    else if(y[3]-y[0]==y[2]-y[1])
    {
        cout<<"YES";
    }
    else if(y[3]+y[0]==y[2]-y[1])
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


}
