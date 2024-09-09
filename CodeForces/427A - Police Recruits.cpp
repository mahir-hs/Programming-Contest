#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int x,y[100001],z=0,i,j=0,sum=0;
    cin>>x;
    while(x--)
    {
        cin>>y[z];
        z++;
    }
    for(i=0; i<z; i++)
    {
        if(y[i]>0)
        {
            sum+=y[i];
        }
        else if(y[i]<0)
        {
            if(sum>0)
            {
                sum--;
            }
            else
                j++;
        }
    }

    cout<<j;
}
