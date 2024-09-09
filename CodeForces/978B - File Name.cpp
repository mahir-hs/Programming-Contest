#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y=0,z=0;
    char a[101];
    cin>>x>>a;
    for(int i=x; i>=0; i--)
    {
        if(a[i]=='x' && a[i-1]=='x' && a[i-2]=='x')
        {
            z=1;
            y++;
        }
    }
    if(z==1)
    {
        cout<<y;
    }
    else
        cout<<0;

}
