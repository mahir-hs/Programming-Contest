#include <bits/stdc++.h>
using namespace std;
int main()
{

    map <int,int> m;
    int x,y,z;
    cin>>x;
    while(x--)
    {
        cin>>z;

       for(int i=0;i<2*z;i++)
        {
            cin>>y;
            if(m[y]==0)
            {
                cout<<y<<" ";
                m[y]=1;
            }
        }
        cout<<endl;
        m.clear();
    }
}




