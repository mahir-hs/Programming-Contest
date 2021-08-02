#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
int gv[1000];

int main()
{
    int x,y=0,z,i,j,k;
    char a[55];
    cin>>x;
    cin>>a;
    for(i=0; i<x-1; i++)
    {
        if(a[i]==a[i+1])
        {
            y++;
        }
    }
    cout<<y;

}
