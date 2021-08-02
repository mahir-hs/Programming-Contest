
#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    string q;
    map <pair<int,int>,string> wano;
    pair <int,int> p;

    cin>>x;
    while(x--)
    {
        cin>>y>>z>>q;
        p = make_pair(y,z);
        wano[p]=q;
    }
    cin>>a;
    while(a--)
    {
        cin>>b>>c;
        p=make_pair(b,c);
        cout<<wano[p]<<endl;
    }

}
