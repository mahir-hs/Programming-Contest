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
    int x=0,i,l;
    string a;
    getline(cin,a);
    for(i=1; i<a.size(); i+=3)
    {
        gv[(int) a[i]]=1;
    }
    for(i=0; i<123; i++)
    {
        x+=gv[i];
    }
    cout<<x;
}
