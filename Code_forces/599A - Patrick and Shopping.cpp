#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int x,y,z,i,j,k,l,m,n,o,a,p,u,v,w;
    cin>>x>>y>>z;
    i=2*(x+y);
    j=2*(x+z);
    k=2*(y+z);
    l=x+y+z;
    a=min(i,min(j,min(k,l)));
    cout<<a;
}
