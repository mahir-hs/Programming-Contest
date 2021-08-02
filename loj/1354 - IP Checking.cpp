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
    int x,z=1;
    cin>>x;
    while(x--)
    {
        ll aa,bb,cc,dd;
        char ac,bc,ccc,dc,aac,bbc,cccc,ddc;
        cin>>aa>>ac>>bb>>bc>>cc>>ccc>>dd;
        bitset<32> a,b,c,d;
        cin>>a>>dc>>b>>aac>>c>>cccc>>d;
        ll e = a.to_ulong();
        ll f = b.to_ulong();
        ll g = c.to_ulong();
        ll h = d.to_ulong();

        if(aa==e && bb==f && cc==g && dd==h)
        {
            cout<<"Case "<<z++<<": "<<"Yes"<<endl;
        }
        else
            cout<<"Case "<<z++<<": "<<"No"<<endl;


    }

}
