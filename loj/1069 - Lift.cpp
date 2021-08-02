#include <bits/stdc++.h>
#define a 1000000
using namespace std;
bool marked[a];

int main()
{

    int x,i=1;
    cin>>x;
    while(x--)
    {
        int y=0,z=0;
        cin>>y>>z;
        if(z>=y)
        {
            int tot=0;
            tot=10+9+(z*4);
            cout<<"Case "<<i<<": "<<tot<<endl;
        }
        else
        {
            int tot=0,up=0;
            up = (y-z)*4;
            tot=10+9+(y*4)+up;
            cout<<"Case "<<i<<": "<<tot<<endl;
        }
        i++;
    }

}
