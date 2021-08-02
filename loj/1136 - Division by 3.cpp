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
int val(int a)
{
    if(a==0)
    {
        return 0;
    }
    int xx = (a/3)*2;
    if(a%3==2)
    {
        xx=xx+1;
    }
    return xx;
}
int main()
{
    int x,k=1;
    cin>>x;
    while(x--)
    {
        ll a,b,c,d,e;
        cin>>a>>b;
        c = val(a-1);
        d = val(b);
        e = d-c;
        cout<<"Case "<<k<<": "<<e<<endl;
        k++;

    }
}
