#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int x,y,z=0,i;
    char a[100],c;
    string b="";
    cin>>x;
    cin>>a;
    for(i=0; i<x; i++)
    {

        c=a[i];
        b+=c;
        i+=z;
        z++;

    }

    cout<<b;
}
