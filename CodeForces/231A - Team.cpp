#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    long long x[4];
    int y,z,a=0,b=0,i,j;
    cin>>z;
    while(z--)
    {
        a=0;
        for(i=0; i<3; i++)
        {
            cin>>x[i];
        }
        for(i=0; i<3; i++)
        {
            if(x[i]==1)
            {
                a++;
            }
        }
        if(a>=2)
        {
            b++;
        }
    }

    cout<<b;
}
