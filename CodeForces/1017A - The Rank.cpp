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
    int x,y,z,i,j,k=1,a,b,c,d,e,f,g,m,n,o,p;
    cin>>x;
    f=x-1;
    cin>>a>>b>>c>>d;
    e=a+b+c+d;
    while(f--)
    {
        cin>>m>>n>>o>>p;
        g=m+n+o+p;
        if(g>e)
        {
            k++;
        }

    }
    cout<<k;
}
