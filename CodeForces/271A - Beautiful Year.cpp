#include <bits/stdc++.h>
using namespace std;
int gv[10000];
string s[22],t[22];
int main()
{
    int x,a,b,c,d;
    cin>>x;
    while(x>0)
    {
        x++;
        a=x/1000;
        b=(x%1000)/100;
        c=((x%1000)%100)/10;
        d=((x%1000)%100)%10;

        if(a!=b && a!=c && a!=d && d!=c && d!=b && c!=b)
            break;
    }
    cout<<x;
}
