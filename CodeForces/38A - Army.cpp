#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    int x,y[101],z,i,j,k,a,b,c=0;
    cin>>x;
    for(i=0; i<x-1; i++)
    {
        cin>>y[i];
    }
    cin>>a>>b;
    for(j=a-1; j<b-1; j++)
    {
        c+=y[j];
    }
    cout<<c;
}
