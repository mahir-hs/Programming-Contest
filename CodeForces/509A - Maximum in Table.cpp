#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z[101][101];
    cin>>x;
    for(int i=0,j=0; j<10; j++)
    {
        z[i][j]=1;
    }
    for(int i=1; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            z[i][j]=z[i-1][j]+z[i][j-1];
        }
    }
    cout<<z[x-1][x-1];

}
