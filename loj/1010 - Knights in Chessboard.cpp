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
        int y=0,z=0,dot=0,un=0;
        cin>>y>>z;
        int tot=0;
        tot=y*z;
        if(y==1 || z==1)
        {
            cout<<"Case "<<i<<": "<<tot<<endl;
        }
        else if(y==2 || z==2)
        {
            if(y==2)
            {
                un=z;
            }
            else
                un=y;
            if(un%4==1)
            {
                cout<<"Case "<<i<<": "<<un+1<<endl;
            }
            if(un%4==2)
            {
                cout<<"Case "<<i<<": "<<un+2<<endl;
            }
            if(un%4==3)
            {
                cout<<"Case "<<i<<": "<<un+1<<endl;
            }
            if(un%4==0)
            {
                cout<<"Case "<<i<<": "<<un<<endl;
            }
        }
        else if(tot%2!=0)
        {
            cout<<"Case "<<i<<": "<<(tot/2)+1<<endl;
        }
        else if(tot%2==0)
        {
            dot=tot/4;
            cout<<"Case "<<i<<": "<<tot/2<<endl;
        }
         i++;

    }
}
