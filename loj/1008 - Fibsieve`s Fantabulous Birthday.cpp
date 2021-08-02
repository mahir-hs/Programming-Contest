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
    int a,v=1;
    cin>>a;
    while(a--)
    {
        unsigned ll j;
        cin>>j;
        double b,c;
        int m,n,val,sqval,x,y;
        b = sqrt(j);
        m = b;
        c = b-m;
        if(c!=0)
        {
            val = m+1;
        }
        else
        {
            val = m;
        }

        sqval = val*val;
        if(sqval%2==0)
        {
            if(c>=0.5)
            {
                x = val;
                int o,p,q;
                o = (val-1)*(val-1);
                p = j-(sqval-(2*val)+1);
                q = sqval-o;
                y = (q-p)+1;
            }
            else if(c>0 && c<0.5)
            {
                y = val;
                int o,p,q;
                p = j-(sqval-(2*val)+1);
                x = p;
            }
            else if(c==0)
            {
                y = 1;
                x = val;
            }
        }
        else
        {
            if(c>=0.5)
            {
                y = val;
                int o,p,q;
                o = (val-1)*(val-1);
                p = j-(sqval-(2*val)+1);
                q = sqval-o;
                x = (q-p)+1;
            }
            else if(c>0 && c<0.5)
            {
                x = val;
                int o,p,q;
                p = j-(sqval-(2*val)+1);
                y = p;
            }
            else if(c==0)
            {
                x = 1;
                y = val;
            }
        }
        cout<<"Case "<<v<<": "<<x<<" "<<y<<endl;
        v++;
    }
}
