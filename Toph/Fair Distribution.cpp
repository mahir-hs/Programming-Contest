#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a,b,c;
    cin>>x>>y;
    if(y%x!=0)
    {
        int z=y/x;
        a=z+1;
        b=a*x;
        c = b-y;
        cout<<c;
    }
    else if(y%x==0)
    {
        cout<<0;
    }

}
