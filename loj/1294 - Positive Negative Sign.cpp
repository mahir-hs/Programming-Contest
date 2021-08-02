#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;

int main()
{
    ll x,i=1;
    cin>>x;
    while(x--)
    {
        ll y=0,z=0,ans=0;
        cin>>y>>z;
        ans = (y*z)/2;
        cout<<"Case "<<i<<": "<<ans<<endl;
        i++;

    }
}
