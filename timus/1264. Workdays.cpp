#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int x,y;
   cin>>x>>y;
   if(y>0)
   {
       y+=1;
   }
   else if(y==0)
   {
       y=1;
   }

   cout<<x*y;
}
