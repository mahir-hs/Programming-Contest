#include <bits/stdc++.h>
using namespace std;
int x[120];
int main()
{
    int a;
    cin>>a;
    int y[a+5];
    for(int i=0; i<a; ++i)
    {
        cin>>y[i];
    }
    for(int i=0; i<a; ++i)
    {
        x[y[i]]=i+1;
    }
    for(int i=1; i<=a; ++i)
    {
        cout<<x[i]<<" ";
    }
}
