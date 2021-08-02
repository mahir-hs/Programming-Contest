#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int x,y,z,a=0;
   cin>>x;
    y= max(1,x);
    z = min(1,x);
   for(int i=z;i<=y;i++)
   {
       a+=i;
   }
   cout<<a;
}
