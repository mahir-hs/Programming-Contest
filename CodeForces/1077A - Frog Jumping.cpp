#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    long long int x,y,z,i,a,b,c,d,e,f=0;
    cin>>a;
    for(i=0; i<a; i++)
    {
        cin>>x>>y>>z;
        if(z%2!=0)
        {
            b=(z/2)+1;
            c=b*x;
            d=(z/2);
            e=d*y;
            f=c-e;
            cout<<f<<"\n";
        }
        else if(z%2==0)
        {
            b=(z/2);
            c=b*x;
            e=b*y;
            f=c-e;
            cout<<f<<"\n";
        }
    }

}
