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
    string a;
    string b;
    getchar();
    while(x--)
    {
        getline(cin,a);
        getline(cin,b);
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        int c=0,d=0;
        int y = a.size();
        int z = b.size();
        for(int i=0;i<y;i++)
        {
            if(a[i]!=' ')
            {
                c+=a[i];
            }
        }
        for(int i=0;i<z;i++)
        {
            if(b[i]!=' ')
            {
                d+=b[i];
            }
        }

        if(c==d)
        {
            cout<<"Case "<<k<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<k<<": No"<<endl;
        }

        k++;



    }

}
