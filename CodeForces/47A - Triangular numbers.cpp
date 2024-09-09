#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y=0,z=0,i;
    cin>>x;
    for(i=1; i<=x; i++)
    {
        y+=i;
        if(x==y)
        {
            z=1;
            break;
        }
    }

    if(z==1)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}
