#include <iostream>
#include <string.h>
using namespace std;
const int t=1001;
char a[t][6];
void hola(int x)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }

}
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
int main()
{
    int x,y,z,k=0,l=0,m=0;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    bool positive = false;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(a[i][j*3]== 'O' && a[i][j*3+1]=='O')
            {
                a[i][j*3]='+';
                a[i][j*3+1]='+';
                positive=true;
                break;
            }

        }
        if(positive)
            break;
    }
    if(!positive)
    {
        no();
        return 0;
    }
    else
    {
        yes();
        hola(x);

    }
}
