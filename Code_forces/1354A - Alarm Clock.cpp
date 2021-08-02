#include <bits/stdc++.h>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    long long a,b,c,d,x,y,z,m,n,p;
    double o;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c>>d;
        if(b>=a)
        {
            z=b;
        }
        else if(d>=c && b<a)
        {
            z=-1;
        }
        else
        {
            m=c-d;
            n=a-b;
            o=double(n)/double(m);
            p=ceil(o);
            z=(p*c)+b;
        }
        cout<<z<<endl;
    }
}

