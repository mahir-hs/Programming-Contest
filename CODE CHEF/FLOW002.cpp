#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;
int main()
{
    ll x;
    cin>>x;
    while(x--)
    {
        int y,z;
        cin>>y>>z;
        if(z>y)
        {
            cout<<y<<endl;
        }
        else
        {
            cout<<y%z<<endl;
        }
    }
}
