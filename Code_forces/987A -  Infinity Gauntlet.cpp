#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x,z,i,j=0,r=0,g=0,b=0,o=0,p=0,y=0;
    string m;
    cin>>x;
    j=6-x;
    while(x--)
    {
        cin>>m;
        if(m=="red")
        {
            r++;
        }
        if(m=="green")
        {
            g++;
        }
        if(m=="blue")
        {
            b++;
        }
        if(m=="purple")
        {
            p++;
        }
        if(m=="yellow")
        {
            y++;
        }
        if(m=="orange")
        {
            o++;
        }
    }

    cout<<j<<"\n";
    if(r==0)
    {
        cout<<"Reality\n";
    }
    if(p==0)
    {
        cout<<"Power\n";
    }
    if(g==0)
    {
        cout<<"Time\n";
    }
    if(b==0)
    {
        cout<<"Space\n";
    }
    if(y==0)
    {
        cout<<"Mind\n";
    }
    if(o==0)
    {
        cout<<"Soul\n";
    }
}
