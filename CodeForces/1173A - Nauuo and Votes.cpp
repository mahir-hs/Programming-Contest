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
    int a,b,c,x,y,z,big,small;
    cin>>a>>b>>c;

    if (a > b)
    {
        if (a <= b+c)
            cout<<'?';
        else
            cout<<'+';
    }
    else if (a < b)
    {
        if (b <= a+c)
            cout<<'?';
        else
            cout<<'-';
    }
    else
    {
        if (c == 0)
            cout<<0;
        else
            cout<<'?';
    }


}
