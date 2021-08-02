#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z=0;
    cin>>x;
    if(x<=30)
    {
        cout<<"Good weather.";
    }
    else if(x>=70)
    {
        cout<<"Bad weather.";
    }
    else
        cout<<"\"Confusing weather.\"";

}
