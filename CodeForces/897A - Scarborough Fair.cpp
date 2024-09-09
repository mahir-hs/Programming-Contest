#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,i,j,k,a,b,c,d;
    char w[101],t[101],r;
    char u,v;
    cin>>x>>y;
    cin>>w;

    for(i=0; i<y; i++)
    {
        cin >> a>>b>>u>>v;
        for(j=a-1; j<=b-1; j++)
        {
            if(w[j]==u)
            {
                w[j]=v;
            }
        }
    }

    cout<<w;

}
