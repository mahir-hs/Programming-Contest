#include <bits/stdc++.h>

using namespace std;
int main()
{
   string a,d;
   cin>>a;
   int b;
   b = a.size();
   d = string(a.rbegin(),a.rend());
   if(a==d)
   {
       cout<<"Yes";
   }
   else
    cout<<"No";
}
