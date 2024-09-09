#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y=0,z[1000][1000],i,j,l=0;
    long long int k=0;
    scanf("%d",&x);

    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)

        {
            scanf("%d",&z[i][j]);
        }
    }

    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)

            if(i == j || i==(x/2) ||j == (x/2) ||(i+j) == (x-1) )
            {
                k+=z[i][j];
            }
    }


    printf("%d",k);

}
