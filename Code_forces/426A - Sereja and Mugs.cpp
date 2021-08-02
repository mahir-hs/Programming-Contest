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
    int x,y,z,i,j=0,sum=0;
    cin>>x>>y;
    while(x--)
    {
        cin>>z;
        j+=z;
        if(z>sum)
        {
            sum=z;
        }

    }
    j-=sum;
    if(j>y)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";

}
