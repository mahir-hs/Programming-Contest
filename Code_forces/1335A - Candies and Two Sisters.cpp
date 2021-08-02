#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    while(x--)
    {
        z=0;
        cin>>y;
        if(y%2==0)
        {
            z=(y/2)-1;
        }
        else if(y%2!=0)
        {
            z=y/2;
        }
        cout<<z;
        cout<<"\n";
    }

}
