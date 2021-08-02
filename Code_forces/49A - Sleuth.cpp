#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[10000];

int main()
{
    int x=0,y=0,z=0,len,c=0;
    string str;
    getline(cin, str);
    len = str.size();

    for(int i=0; i<len; i++)
    {
        if(str[i] != ' ')
        {
            str[c++]=str[i];
        }
        else if(str[i]==' ')
        {
            y++;
        }

    }

    x=len-y-2;
    if(str[x]== 'a' ||str[x] == 'e' ||str[x] == 'i' ||str[x] == 'o' ||str[x] == 'u' ||str[x] == 'y' ||
            str[x] == 'A' ||str[x] == 'E' ||str[x] == 'I' ||str[x] == 'O' ||str[x] == 'U' ||str[x] == 'Y')
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
