#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y[101],z,i,a=0,b=0,j;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y[i];
    }
    b=0;
    for(i=0; i<x; i++)
    {
        a=0;
        for(j=0; j<x; j++)
        {
            if(y[i]==y[j])
            {
                a++;
            }
        }
        if(b<a)
        {
            b=a;
        }

    }
    cout<<b;

}

