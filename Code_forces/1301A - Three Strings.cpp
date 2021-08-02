#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int x,y,z[1001],i,j,k=0;
    string a,b,c;
    cin>>x;
    while(x--)
    {
        k=0;
        cin>>a>>b>>c;
        for(i=0; i<(int)a.size(); i++)
        {
            if(c[i]!=a[i] && c[i]!=b[i])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            cout<<"NO"<<"\n";
        }
        else
            cout<<"YES"<<"\n";

    }

}
