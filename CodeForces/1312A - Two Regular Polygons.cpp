#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,z,b;
    cin>>x;
    while(x--)
    {
        b=0;
        cin>>y>>z;
        if(y%z==0)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
