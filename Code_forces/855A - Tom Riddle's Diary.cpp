#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x,y=0,k,l=0,i,j;
    string a[105];
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<x; i++)
    {
        l=0;
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                l=1;
            }
        }

        if(l!=1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }
}
