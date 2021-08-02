#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int x,y[101],z=0,i,j,k,temp=0;
    cin>>x;
    if(x%2==1)
    {
        cout<<-1;
    }
    else if(x>1)
    {
        for(i=0; i<x; i++)
        {
            y[i]=i+1;
        }
        for(i=0; i<x; i+=2)
        {

            temp=y[i];
            y[i]=y[i+1];
            y[i+1]=temp;
        }
        for(i=0; i<x; i++)
        {
            cout<<y[i]<<" ";
        }
    }
}
