#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    int x,y,z=1;
    string a;
    cin>>x>>a;
    y=a.size();
    while(x>1)
    {
        z*=x;
        x-=y;
    }
    cout<<z<<endl;

}
