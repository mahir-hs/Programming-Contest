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
        string a,b;
        char c;
        ll u,v,y1,y2;
        cin>>a>>u>>c>>y1;
        cin>>b>>v>>c>>y2;
        int ans=0;

        if(a=="February" || a=="January")
        {

            y1=y1;
        }
        else
        {
            y1++;
        }

        if((b=="February" && v<29)||b=="January")
        {
            y2--;
        }
        ll q,r,t;
        q = (y2/4)-((y1-1)/4);
        r = (y2/100)-((y1-1)/100);
        t = (y2/400)-((y1-1)/400);
        ans = q-r+t;


    cout<<"Case "<<z++<<": "<<ans<<endl;


}

}
