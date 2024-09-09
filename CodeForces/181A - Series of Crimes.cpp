#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int x,y,z,i,j,k=0,m,n,o,p,q;
    char a[110][110];
    cin>>x>>y;
    for(i=0; i<x; i++)
    {
        k=0;
        for(j=0; j<y; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                k++;
            }
        }
        if(k==1)
        {
            m=i;

        }
        if(k==2)
        {
            n=i;
        }
    }


    for(j=0; j<y; j++)
    {
        if(a[m][j]=='*')
        {
            o=j;
            break;
        }
    }


    for(q=0; q<y; q++)
    {
        if(q==o)
        {
            continue;
        }
        if(a[n][q]=='*')
        {
            p=q;
        }
    }
    cout<<m+1<<" "<<p+1;

}
