#include <bits/stdc++.h>

using namespace std;
int main()
{
   int x,i=1;
   cin>>x;
   while(x--)
   {
       int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
       cin>>a>>b>>c;
       e = max(a,max(b,c));
       f = min(a,min(b,c));
       g = (a+b+c)-e-f;
       d = sqrt((f*f) + (g*g));
       if(e==d)
       {
           cout<<"Case "<<i<<":"<<" yes"<<endl;
       }
       else
       {
           cout<<"Case "<<i<<":"<<" no"<<endl;
       }
       i++;
   }

}
