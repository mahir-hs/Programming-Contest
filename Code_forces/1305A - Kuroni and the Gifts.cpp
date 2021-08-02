#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,z[101],b,i,j,k,f[101],l;
    cin>>x;
    while(x--)
    {
        cin>>y;
        for(i=0; i<y; i++)
        {
            cin>>z[i];
        }
        for(j=0; j<y-1; j++)

        {
            for(k=0; k<y-j-1; k++)
            {
                if(z[k]>z[k+1])
                {
                    int temp = z[k];
                    z[k]=z[k+1];
                    z[k+1]=temp;
                }
            }
        }
        for(l=0; l<y; l++)
        {
            cin>>f[l];
        }
        for(j=0; j<y-1; j++)

        {
            for(k=0; k<y-j-1; k++)
            {
                if(f[k]>f[k+1])
                {
                    int temp = f[k];
                    f[k]=f[k+1];
                    f[k+1]=temp;
                }
            }
        }
        for(i=0; i<y; i++)
        {
            cout<<z[i]<<" ";
        }
        cout<<"\n";
        for(i=0; i<y; i++)
        {
            cout<<f[i]<<" ";
        }
        cout<<"\n";
    }


}
