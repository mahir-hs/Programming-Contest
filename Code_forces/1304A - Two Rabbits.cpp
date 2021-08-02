#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,d,k,i,e,f;
    cin>>x;
    while(x--)
    {
        k=0;
        cin>>a>>b>>c>>d;
        i=b-a;
        e=c+d;
        k=(b-a)/(c+d);

        if(i%e==0)
        {
            cout<<k<<"\n";
        }
        else
            cout<<-1<<"\n";
    }

}
