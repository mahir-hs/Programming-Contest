#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define MAX_SIZE 15000
using namespace std;

int main()
{
    vector <int> vec;
    int x,i=0,a,b,c;
    cin>>x;
    while(x--)
    {
        int y;
        cin>>y;
        vec.push_back(y);
        i++;
    }
    cin>>a>>b>>c;
    vec.erase(vec.begin()+a-1);
    vec.erase(vec.begin()+b-1,vec.begin()+c-1);
    cout<<vec.size()<<endl;
    for(auto j: vec)
    {
        cout<<j<<" "; ///range based for loop
    }
}
