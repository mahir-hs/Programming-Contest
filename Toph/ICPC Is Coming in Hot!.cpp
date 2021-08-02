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
    char s[100000];
    cin>>s;
    ll arr[11],val=0,cnt=0,k=0;
    k=strlen(s);
    for(ll i=0; i<k; i++)
    {
        arr[s[i]-'0']++;
    }
    for(int j=0; j<=9; j++)
    {
        if(arr[j]>cnt)
        {
            cnt=arr[j];
            val=j;
        }
    }
    cout<<val;
}