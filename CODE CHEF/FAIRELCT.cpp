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
    ll x;
    cin>>x;
    while(x--)
    {
        ll a,b,cnt=0,ans=0;
        vll va,vb;
        cin>>a>>b;
        for(ll i=0; i<a; i++)
        {
            int c;
            cin>>c;
            va.pb(c);
        }
        for(ll i=0; i<b; i++)
        {
            int c;
            cin>>c;
            vb.pb(c);
        }
        ll sum1 =accumulate(va.begin(),va.end(),0);
        ll sum2 =accumulate(vb.begin(),vb.end(),0);


        while(sum1<=sum2)
        {
            sort(va.begin(),va.end());
            sort(vb.begin(),vb.end(),greater<ll>());
        if(vb[0]<=va[0])
        {
            ans=-1;
            break;
        }
            sum1-=va[0];
            sum1+=vb[0];
            sum2+=va[0];
            sum2-=vb[0];
            ll temp=va[0];
            va[0]=vb[0];
            vb[0]=temp;
            ans++;
        }

        cout<<ans<<endl;

    }

}
