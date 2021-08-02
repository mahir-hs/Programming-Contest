#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x,i=1;
   cin>>x;
   while(x--)
   {
       int a,b,c,d=0,y,z;
       cin>>a>>b>>c;
       y = max(a,max(b,c));
       z = min(a,min(b,c));
       d = (a+b+c)-y-z;
       cout<<"Case "<<i<<": "<<d<<endl;
       i++;
   }

}

