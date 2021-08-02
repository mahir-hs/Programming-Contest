#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    int z;
    while(scanf("%d",&z) && z!=0)
    {

        int x,y;
        cin>>x>>y;
        while(z--)
        {
            int a,b;
            cin>>a>>b;
            if(a==x || b==y)
            {
                cout<<"divisa"<<endl;
            }
            else if(x<a && y<b)
            {
                cout<<"NE"<<endl;
            }
            else if(x>a && y<b)
            {
                cout<<"NO"<<endl;
            }
            else if(x>a && y>b)
            {
                cout<<"SO"<<endl;
            }
            else
            {
                cout<<"SE"<<endl;
            }
        }
    }

    return 0;
}
