#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int x,y,z=0,i,j,k=0,f=0,m;
    string a;
    cin>>x;
    while(x--)
    {
        cin>>a;
        j=0;
        k=-1;
        m=0;
        f=-1;
        z=0;
        m=a.size();
        for(i=0; i<m; i++)
        {
            if(a[i]=='1')
            {
                k=i;
                break;
            }

        }
        for(i=m-1; i>=0; i--)
        {
            if(a[i]=='1')
            {
                f=i;
                break;
            }

        }


        for(i=k; i<=f; i++)
        {
            if(a[i]=='0')
            {
                z++;
            }
        }
        if(k==-1 && f==-1)
        {
            z=0;
        }

        cout<<z<<"\n";

    }


}
