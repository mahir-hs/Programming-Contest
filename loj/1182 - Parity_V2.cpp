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
    int x,k=1;
    cin>>x;
    while(x--)
    {
        ll y,b,z=0,a;
        cin>>y;

        while(y!=0)
        {
            if(y%2==0)
            {
                y=y/2;
                continue;
            }
            if(y%2!=0)
            {
                y=y/2;
                z++;
            }
        }

        if(z%2==0)
        {
            cout<<"Case "<<k<<": even"<<endl;
            k++;
        }
        if(z%2!=0)
        {
            cout<<"Case "<<k<<": odd"<<endl;
            k++;
        }


    }
}
