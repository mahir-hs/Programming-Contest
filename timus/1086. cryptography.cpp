#include <bits/stdc++.h>
#define tot 1000000
using namespace std;
bool marked[tot];
void siev(int y)
{

    for(int i=2; i*i<=tot; i++)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=tot; j+=i)
            {
                marked[j]=true;
            }
        }
    }

}
int main()
{
    int x;
    cin>>x;
    vector <int> vec;
    siev(tot);
    for(int i=2; i<=tot; i++)
    {
        if(marked[i]==false)
        {
            vec.push_back(i);
        }
    }
    while(x--)
    {
        int z;
        cin>>z;
        cout<<vec[z-1]<<endl;
    }
}
