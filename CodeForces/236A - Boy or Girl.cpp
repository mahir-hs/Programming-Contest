#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int  i,j,k,a=1;
    char x[101];
    cin>>x;
    j=strlen(x);
    sort(x,x+j);
    for(i=0; i<j-1; i++)
    {
        if(x[i]!=x[i+1])
        {
            a++;
        }
    }
    if(a%2==1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";

}
