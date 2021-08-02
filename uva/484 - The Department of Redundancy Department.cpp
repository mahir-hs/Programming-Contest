
#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;
int main()
{
    unordered_map <int,int> m;
    vector <int> vec;
    int x,y,z,a=0;
    while(cin>>y)
    {
        if(m[y]==0)
        {
            vec.push_back(y);
            m[y]=1;
        }
        else
        {
            m[y]=m[y]+1;
        }

    }

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "<<m[vec[i]]<<endl;
    }
}
