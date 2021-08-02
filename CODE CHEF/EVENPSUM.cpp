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
   unsigned ll x,y,z;
   cin>>x;
   while(x--)
   {
       cin>>y>>z;
       unsigned ll a,b,c,d,e,f;
       a = y/2;
       b = z/2;
       c = a*b;
       if(y%2!=0)
       {
           d = a+1;
       }
       else
       {
           d = a;
       }
       if(z%2!=0)
       {
           e = b+1;
       }
       else
       {
           e = b;
       }
       f = d*e;
       cout<<c+f<<endl;
   }
}

