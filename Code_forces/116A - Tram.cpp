#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int x,y,z,a=0,b=0;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        a-=y;
        a+=z;
        if(a>b)
        {
            b=a;
        }
    }
    cout<<b;
}
