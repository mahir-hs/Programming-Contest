#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=0,z=0,i=0,j,k;
    cin>>x>>y;
    while(x!=0 && y!=0)
    {
        z++;
        x--;
        y--;
    }
    if(x==0 && y!=0)
    {
        i=y/2;
    }
    else if(y==0 && x!=0)
    {
        i=x/2;
    }
    cout<<z<<" "<<i;

}
