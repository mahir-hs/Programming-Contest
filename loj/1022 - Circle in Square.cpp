#include<bits/stdc++.h>
using namespace std;
double pi=acos(0.0);
#define long long ll;
int main()
{
   int x,i=1;
   cin>>x;
   while(x--)
   {
       double y=0,z=0,a=0,b=0;
       cin>>y;
       z = 2*pi*y*y;
       a = (2*y) * (2*y);
       b = a-z;
       cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<b<<endl;
       i++;
   }

}
