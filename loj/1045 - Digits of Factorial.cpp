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

double x[1000000];

int main()
{
    int a,b,c;

    for(int i=1; i<=1000000; i++)
    {
        x[i] = x[i-1] + log(i);
    }

    cin>>a;

    for(int i=1; i<=a; i++)
    {
        cin>>b>>c;

        long long val=x[b]/log(c) + 1;

        printf("Case %d: %lld\n",i,val);
    }
}
