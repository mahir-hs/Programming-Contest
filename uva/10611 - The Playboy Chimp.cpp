#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
       int x,y;
       cin>>x;
       ll arr[x];
       for(int i=0;i<x;i++)
       {
           cin>>arr[i];
       }
       cin>>y;
       ll arr2[y];
       for(int j=0;j<y;j++)
       {
           cin>>arr2[j];
       }
       for(int m=0;m<y;m++)
       {
           int hi=0,lo=0;
           for(int n=0;n<x;n++)
           {
               if(arr[n]<arr2[m])
               {
                   lo=arr[n];
               }
               else if(arr[n]>arr2[m])
               {
                   hi=arr[n];
                   break;
               }

           }
           if(hi>0 && lo>0)
           {
               cout<<lo<<" "<<hi<<endl;
           }
           else if(hi==0 && lo>0)
           {
               cout<<lo<<" "<<"X"<<endl;
           }
           else
           {
               cout<<"X"<<" "<<hi<<endl;
           }

       }
}
