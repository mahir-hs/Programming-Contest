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
    int x,sum=0,fir=0,sec=1;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        sum=fir+sec;
        fir=sec;
        sec=sum;
    }

    cout<<fir;
}
