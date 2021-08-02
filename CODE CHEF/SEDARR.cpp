#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        ll y,z;
        cin>>y>>z;
        vii v;
        int c;
        for(int i=0; i<y; i++)
        {
            cin>>c;
            v.pb(c);
        }
        ll s=accumulate(v.begin(),v.end(),0);
        if(s%z==0)
        {
            cout<<0<<endl;

        }
        else
            cout<<1<<endl;

    }
}
