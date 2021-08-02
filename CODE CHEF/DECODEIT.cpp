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
        string pp="";
        string ans;
        int aa;
        string aaa;
        cin>>aa>>aaa;
        string bb="abcdefghijklmnop";
        for(int i=0; i<aa; i+=4)
        {
            int xx=0,uu=0;
            ans = bb;
            int j=i,tt=4;
            while(tt>0)
            {
                if(aaa[j]=='1')
                {
                    xx=ans.size();
                    xx/=2;
                    ans.erase(0,xx);

                }
                else
                {
                    uu = ans.length();
                    xx=ans.size();
                    xx/=2;
                    ans.erase(xx,uu);
                }
                tt--;
                j++;
            }
            pp+=ans;

        }
        cout<<pp<<endl;

    }

}
