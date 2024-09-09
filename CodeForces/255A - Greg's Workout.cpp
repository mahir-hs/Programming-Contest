#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int gv[1000];

int main()
{
    int x,y[30],i,j,k=0,biceps=0,chest=0,ack=0;
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y[i];
    }
    for(i=0; i<x; i++)
    {

        if(i%3==0)
        {
            chest+=y[i];
        }
        else if(i%3==1)
        {
            biceps+=y[i];
        }
        else
        {
            ack+=y[i];
        }
    }
    if(chest>biceps && chest>ack)
    {
        cout<<"chest";
    }
    else if(chest<biceps && biceps>ack)
    {
        cout<<"biceps";
    }
    else
    {
        cout<<"back";
    }

}
