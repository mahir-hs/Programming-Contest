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
    int x,y,z,i,j=0,k=0;
    cin>>x;
    while(x--)
    {
        cin>>y>>z;
        k=z-y;
        if(k>=2)
        {
            j++;
        }
    }
    cout<<j;

}
