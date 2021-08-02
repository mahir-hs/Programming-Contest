#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;


int main()
{
   ll a,i=0;
   vector <ll> vec;
   while(cin>>a)
   {
       i++;

       vec.push_back(a);
   }
   for(int j=i-1;j>=0;j--)
   {
       long double res=sqrt(vec.at(j));
       cout<<fixed<<setprecision(4)<<res<<endl;
   }
}
