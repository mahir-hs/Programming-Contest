#include <iostream>
#include <string.h>
using namespace std;
int check[109];
int main()
{
    int x,y,z,i,a=0,b,c;
    cin>>x;

    if(x%2==0)
    {
        a=x/2;
        cout<<a<<"\n";
        for(i=0; i<a; i++)
        {
            cout<<2<<" ";
        }
    }
    else if(x%2!=0)
    {
        x=x-1;
        a=x/2;
        cout<<a<<"\n";
        for(i=0; i<a-1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }

}
