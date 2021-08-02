#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,i=1;
    cin>>x;
    while(x--)
    {
        int y,a=0;
        cin>>y;
        while(y--)
        {
            int z;
            cin>>z;
            if(z>0)
               {
                   a+=z;
               }
        }
        cout<<"Case "<<i<<": "<<a<<endl;
        i++;
    }

}
