#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    int x=0;
    while(cin>>x)
    {
        int y=0,z=x,k=0;
        y=x+1;
        while(y>2)
        {

                z+=y/3;
                y=(y/3)+(y%3);

        }
        if(y==2)
            cout<<z++<<endl;
        else
            cout<<z<<endl;
    }

}
