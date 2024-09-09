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
    ll z;
    cin>>z;
    while(z--)
    {
        ll x,sum=0;
        cin>>x;
        vll e;
        for(ll i=0; i<x; i++)
        {
            ll c;
            cin>>c;
            e.pb(c);
        }
        sort(e.rbegin(),e.rend());
        for(ll i=0; i<x; i++)
        {
            if(i%2==0)
            {
                if(e[i]%2==0)
                {
                    sum+=e[i];
                }
            }
            else
            {
                if(e[i]%2!=0)
                {
                    sum-=e[i];
                }
            }
        }
        if(sum==0)
        {
            cout<<"Tie"<<endl;
        }
        else if(sum>0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }

}
