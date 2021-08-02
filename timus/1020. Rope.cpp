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
double a[100],b[100];
float rec(int i,int j)
{
    return sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
}
int main()
{
  int x,z,i=0;
  float sum=0,y;
  cin>>x>>y;
  z=x;
  while(x--)
  {
      cin>>a[i]>>b[i];
      i++;
  }
  sum+=2*pi*y+rec(z-1,0);
  for(int i=1;i<z;i++)
  {
      sum+=rec(i-1,i);
  }
  cout<<fixed<<setprecision(2)<<sum;
}
