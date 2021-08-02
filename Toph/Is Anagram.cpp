#include <bits/stdc++.h>
using namespace std;

int main()
{
   string a,b;
   cin>>a>>b;
   int x,y;
   x = a.size();
   y = b.size();
   if(x==y)
   {
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       if(a==b)
       {
           cout<<"Yes";
       }
       else
        cout<<"No";
   }
   else
   {
       cout<<"No";
   }

}
