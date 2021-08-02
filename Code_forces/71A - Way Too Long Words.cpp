#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int x=0,y=0,z,i,a;
    cin>>z;

    for(i=0; i<z; i++)
    {
        string str;
        cin>>str;
        int ln = str.length();
        if(ln>10)
        {
            x=ln-2;
            cout<<str[0]<<x<<str[ln-1]<<"\n";
        }
        else
            cout<<str<<"\n";
    }
}
