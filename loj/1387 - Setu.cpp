#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
typedef long long int ll;
int main()
{
   int x,y,z,sum=0,i=1;
   string a,d="donate",e="report";
   cin>>x;
   while(x--)
   {
       cin>>y;
       int sum=0;
       cout<<"Case "<<i<<":"<<endl;
       while(y--)
       {

          cin>>a;
           if(a==d)
           {
               cin>>z;
               sum +=z;
           }
           else if(a==e)
           {
               cout<<sum<<endl;
           }

       }
       i++;

   }
}
