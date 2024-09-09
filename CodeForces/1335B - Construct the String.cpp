#include <bits/stdc++.h>
using namespace std;
int gv[10000],n;
string s[22],t[22];
int main()
{
    int x,a,b,c;
    cin>>x;
    while(x--)
    {
        cin>>a>>b>>c;
        for(int i=0; i<a; ++i)
        {
            cout<<char('a'+ i%c);
        }
        cout<<endl;
    }
}
