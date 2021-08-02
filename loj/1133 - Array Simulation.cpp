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
        ll a,b;
        cin>>a>>b;
        ll arr[a+1]={0};
        for(ll i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(ll i=1;i<=b;i++)
        {
            char c;
            ll d;
            cin>>c;
            if(c=='S')
            {
                cin>>d;
                for(ll j=0;j<a;j++)
                {
                    arr[j] = arr[j] + d;
                }
            }
            if(c=='M')
            {
                cin>>d;
                for(ll j=0;j<a;j++)
                {
                    arr[j] = arr[j] * d;
                }
            }
            if(c=='D')
            {
                cin>>d;
                for(ll j=0;j<a;j++)
                {
                    arr[j] = arr[j] / d;
                }
            }
            if(c=='R')
            {
               reverse(arr,arr+a);
            }
            if(c=='P')
            {
                int u,v;
                cin>>u>>v;
                int temp = arr[u];
                arr[u] = arr[v];
                arr[v] = temp;
            }

        }

        cout<<"Case "<<z++<<":"<<endl;

        for(int ll i=0;i<a-1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[a-1]<<endl;

    }



}
