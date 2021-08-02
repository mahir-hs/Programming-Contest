#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int x=0,y=0,z=0,i,a;
    string str;
    getline(cin,str);

    int ln = str.length();
    for(i=0; i<ln; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            x++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            y++;
        }
    }
    if(x>=y)
    {
        for(i=0; i<ln; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
        }

    }
    else if(x<y)
    {
        for(i=0; i<ln; i++)
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
    }
    cout<<str;
}
