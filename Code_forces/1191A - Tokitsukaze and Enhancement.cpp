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
    int n,a;
    cin>>n;
    a=n%4;
    if(a==1)
        cout<<0<<" "<<"A";
    else if(a==2)
        cout<<1<<" "<<"B";
    else if(a==3)
        cout<<2<<" "<<"A";
    else if(a==0)
        cout<<1<<" "<<"A";

}
