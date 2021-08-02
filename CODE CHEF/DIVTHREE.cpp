#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    210
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  mii   map<int,int>
#define  mll   map<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    ll x,z=1;
    cin>>x;
    while(x--)
    {
        unsigned ll n,k,d,a,sum=0,s,ans = 0;
        cin>>n>>k>>d;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            sum+=s;
        }
        ans = sum/k;
        if(ans>=d)
        {
            cout<<d<<endl;
        }
        else
            cout<<ans<<endl;

    }

}
