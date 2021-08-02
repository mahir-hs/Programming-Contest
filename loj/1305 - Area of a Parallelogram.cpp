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
        int ax=0,ay=0,bx=0,by=0,cx=0,cy=0,dx=0,dy=0,area=0;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;
        area=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(area<0)
        {
            area*=-1;
        }
        area*=.5;
        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;
        i++;
    }
}
