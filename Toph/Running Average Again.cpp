#include <bits/stdc++.h>

using namespace std;
int main()
{
 long long x,m=1,z=0,y;
  cin>>x;
  while(x--)
  {
      cin>>y;
      z+=y;
      if(z%m==0)
      {
          cout<<z/m<<endl;
      }
      else
      {
          cout<<fixed<<setprecision(10)<<(z*1.0)/m<<endl;
      }
      m++;
  }
}
