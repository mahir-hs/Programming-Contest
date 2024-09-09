#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y[101],z[101],a,b=0;
    cin>>x;
    for(int i=1; i<=x; i++)
    {
        cin>>y[i]>>z[i];
    }
    cin>>a;

    for(int i=1; i<=x; i++)
    {
        if(z[i]>=a)
        {
            b++;
        }
    }

    cout<<b;
}
