#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        a=(y*60)+z;
        b=1440-a;
        cout<<b<<"\n";
    }

}
