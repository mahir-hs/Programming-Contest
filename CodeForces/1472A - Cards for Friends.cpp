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
        int a,b,c;
        cin>>a>>b>>c;
        ll sum=1;
        while(a%2==0)
        {

            a/=2;
            sum*=2;
        }
        while(b%2==0)
        {

            b/=2;
            sum*=2;
        }

        if(sum>=c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}
