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
        cout<<"Case "<<z++<<":"<<endl;
        stack <string> b;
        stack <string> f;
        string a,temp,l,k;
        l = "http://www.lightoj.com/";
        b.push(l);

        while(cin>>a)
        {

            if(a=="QUIT")
            {
                break;
            }
            if(a=="VISIT")
            {
                cin>>k;
                b.push(k);
                cout<<k<<endl;
                if(!f.empty())
                {
                    while(!f.empty())
                    {
                        f.pop();
                    }
                }
            }
            else
            {
                if(a=="BACK")
                {
                    temp = b.top();
                    f.push(temp);
                    b.pop();
                    if(!b.empty())
                    {
                        cout<<b.top()<<endl;

                    }
                    else
                    {
                        cout<<"Ignored"<<endl;
                        temp = f.top();
                        b.push(temp);
                        f.pop();
                    }
                }
                else if(a=="FORWARD")
                {
                    if(!f.empty())
                    {
                        cout<<f.top()<<endl;
                        temp = f.top();
                        b.push(temp);
                        f.pop();
                    }
                    else
                    {
                        cout<<"Ignored"<<endl;
                    }
                }
            }
        }
    }



}
