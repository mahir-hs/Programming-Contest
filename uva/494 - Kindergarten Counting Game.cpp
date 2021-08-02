#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int a=0;
        for(int i=0;i<s.size();i++)
        {
             if((s[i]>64 && s[i]<91) || (s[i]>=97 && s[i]<=122))
             {
                 a++;
                 while((s[i]>64 && s[i]<91) || (s[i]>=97 && s[i]<=122) )
                 {
                    i++;
                 }
                
             }
        }
        cout<<a<<endl;
    }
}
