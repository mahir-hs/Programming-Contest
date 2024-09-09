#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a=0,b,c;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        a=0;
        if(y>z)
        {
            c=y-z;
            if(c>=5)

            {
                a+=c/5;
                c=c%5;
            }

            a+=c/2;
            c=c%2;
            a+=c;

        }
        else if(y<z)
        {
            c=z-y;
            if(c>=5)

            {
                a+=c/5;
                c=c%5;
            }

            a+=c/2;
            c=c%2;
            a+=c;
        }
        cout<<a<<"\n";
    }

}
