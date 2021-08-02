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
    cin>>x;
    while(x--)
    {
        int y,z;
        cin>>y>>z;
        int sum=0;
        sum=(y+z)/2;
        if(sum%2==0)
        {
            cout<<"Sadia will be happy."<<endl;
        }
        else
        {
            cout<<"Oops!"<<endl;
        }
    }
}
