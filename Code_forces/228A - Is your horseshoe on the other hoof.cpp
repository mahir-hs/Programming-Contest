#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    long long x[4];
    int y,z,a=0,b=0,i,j;
    for(i=0; i<4; i++)
    {
        cin>>x[i];
    }
    for(i=0; i<4-1; i++)
    {
        for(j=i; j<4; j++)
        {
            if(x[i]==x[j+1])
            {
                a++;
                break;
            }
            else
                continue;
        }
    }
    cout<<a;

}
