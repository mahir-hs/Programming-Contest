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
    int x,y=0,z;
    cin>>x;
    while(x--)
    {
        cin>>z;
        y+=abs(z);
    }
    cout<<y;

}
