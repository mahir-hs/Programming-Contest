#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;


int main()
{
  int x,y,z;
  set <int> s;
  set <int> :: iterator et;
  cin>>x;
  while(x--)
  {
      cin>>y>>z;
      if(y==1)
      {
          s.insert(z);
      }
      else if(y==2)
      {
          s.erase(z);
      }
      else
      {
          if(s.count(z))
          {
              cout<<"Yes"<<endl;
          }
          else
          {
              cout<<"No"<<endl;
          }

      }
  }
}
