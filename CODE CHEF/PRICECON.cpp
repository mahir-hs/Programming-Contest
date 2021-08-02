#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
    int x,y,z,i,j,k,a=0,b=0;
    cin>>x;
    while(x--)
    {
        a=0;
        b=0;
        cin>>y>>z;
        while(y--)
        {
            cin>>i;
            b+=i;
            if(i>z)
            {
                a+=z;
            }
            else
            {
                a+=i;
            }
        }
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }
}
