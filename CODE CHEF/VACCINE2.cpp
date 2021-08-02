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
bool cmp(string &a,string &b)
{
    return a.size()<b.size();
}

int main()
{
    ll x,y,z;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        vll j,k;
        ll a;
        for(ll i=0; i<y; i++)
        {
            cin>>a;
            if(a>=80 || a<=9)
                j.pb(a);
           else
            k.pb(a);
        }
        int js,ks;
        js = j.size();
        ks = k.size();
        ll jb,jc,sum1,sum2,kb,kc;
        jb = js/z;
        if(js%z==0)
        {
            jc = 0;
        }
        else
        {
            jc = 1;
        }
        sum1 = jb+jc;
        kb = ks/z;
        if(ks%z==0)
        {
            kc = 0;
        }
        else
        {
            kc = 1;
        }
        sum2 = kb+kc;

        cout<<sum1+sum2<<endl;
    }
}

