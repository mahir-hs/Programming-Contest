#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;

int main()
{
    int x,y,i=0;
    cin>>x;
    y=x;
    int arr[y];
    while(x--)
    {
        int z;
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+y);
    int p=0;
    while(y--)
    {
        cout<<arr[p]<<endl;
        p++;
    }

}
