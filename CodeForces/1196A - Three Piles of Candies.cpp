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
    long long int a,b,c,x,y,z,big,small;
    cin>>a;
    while(a--)
    {
        cin>>x>>y>>z;
        big=x+y+z;
        small=big/2;
        cout<<small<<"\n";
    }

}
