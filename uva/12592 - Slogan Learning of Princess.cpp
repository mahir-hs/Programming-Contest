#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;
int main()
{
    int x,y,z;
    string a,b,c;
    map <string,string> par;
    cin>>x;
    cin.ignore();
    while(x--)
    {
        getline(cin,a);
        getline(cin,b);
        par[a]=b;
    }
    cin>>y;
    cin.ignore();
    while(y--)
    {
        getline(cin,c);
        cout<<par[c]<<endl;
    }
}

