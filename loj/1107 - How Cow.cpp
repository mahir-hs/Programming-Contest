#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;

int main()
{
   int x,i=1;
   cin>>x;
   while(x--)
   {

       int a=0,b=0,c=0,d=0,y=0;
       cin>>a>>b>>c>>d;
       cin>>y;
       cout<<"Case "<<i<<":"<<endl;
       while(y--)
       {
           int xx=0,yy=0;
           cin>>xx>>yy;
           if(xx>=a && xx<=c && yy>=b && yy<=d)
           {
               cout<<"Yes"<<endl;
           }
           else
           {
               cout<<"No"<<endl;
           }

       }
       
       i++;
   }
}
