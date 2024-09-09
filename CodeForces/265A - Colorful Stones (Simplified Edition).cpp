#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;
int gv[1000];

int main()
{
    int x,i,j,k=0;
    string a,b;
    cin>>a>>b;
    for(i=0; i<b.length(); i++)
    {
        if(b[i]==a[k])
        {
            k+=1;
        }
    }

    cout<<k+1;

}
