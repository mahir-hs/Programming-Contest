#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];
string s[22],t[22];

int main()
{
    int x,y,z,i,j,k;
    cin>>x>>y;
    for(i=0; i<x; i++)
    {
        cin>>s[i];
    }
    for(i=0; i<y; i++)
    {
        cin>>t[i];
    }
    cin>>z;
    while(z--)
    {
        cin>>k;
        k--;
        cout<<s[k%x] + t[k%y]<<"\n";
    }


}
