#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;


int main()
{
   int x;
   vector <int> vec;
   cin>>x;
   if(x==0)
   {
       cout<<10;
       return 0;
   }
   if(x==1)
   {
       cout<<1;
       return 0;
   }
   for(int i=9;i>1;i--)
   {
       while(x%i==0)
       {
           x/=i;
         vec.push_back(i);
       }
   }
   if(x==1)
   {
       for (int j=vec.size()-1;j>=0;j--)
       {
           cout<<vec.at(j);
       }
   }
   else
   {
       cout<<-1;
   }
}
