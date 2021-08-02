#include <bits/stdc++.h>

using namespace std;
int main()
{
  float a,b,c,d,e,f;
  cin>>a>>b;
  c = .5*(a*60+b);
  d = b*6.0;
  e = abs(c-d);
  f = min(360-e,e);
  cout<<fixed<<setprecision(4)<<f;

}
