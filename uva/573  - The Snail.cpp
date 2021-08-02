#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    int a,c,d,day;
    float b,p,x;
    while(1)
    {
        cin>>a>>b>>c>>d;
        if(a==0)
        {
            break;
        }
        day=1;
        x=0;
        p = b*d/100;
        while(1)
        {
            x+=b;
            if(b>0)
            {
                b-=p;
            }
            if(x>a)
            {
                break;
            }
            x-=c;
            if(x<0)
            {
                break;
            }
            day++;
        }
        if(x<0)
        {
            cout<<"failure on day "<<day<<endl;
        }
        else
        {
            cout<<"success on day "<<day<<endl;
        }

    }

}
