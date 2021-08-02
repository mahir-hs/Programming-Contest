#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;
int main()
{
    int x;
    float y,z;
    cin>>x>>y;
    if(x%5==0 && x+0.50<=y)
    {
        z=y-x-0.50;
        cout<<fixed<<setprecision(2)<<z;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<y;
    }
}
