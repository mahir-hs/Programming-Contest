#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int x,y,z=0,i;
    cin>>x>>y;
    i=x*2;
    z+=(i+y-1)/y;
    i=x*5;
    z+=(i+y-1)/y;
    i=x*8;
    z+=(i+y-1)/y;
    cout<<z;

}
