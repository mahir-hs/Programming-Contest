#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,n,o,p,y,z=0,i=0,j=0,k=0,l=0;
    string x;
    cin >> a >>b >> c>> d >> x;
    m = count(x.begin(), x.end(), '1');
    n = count(x.begin(), x.end(), '2');
    o = count(x.begin(), x.end(), '3');
    p = count(x.begin(), x.end(), '4');

    i=m*a;
    j=n*b;
    k=o*c;
    l=p*d;
    z=i+j+k+l;
    cout<<z;
}
