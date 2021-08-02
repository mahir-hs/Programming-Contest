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
    int x;
    cin>>x;
    while(x--)
    {
        int y;
        cin>>y;
        int arr[200];
    arr[0]=1;
    int temp=0,m=1;
    for(int i=1; i<=y; i++)
    {
        for(int j=0; j<m; j++)
        {
            temp = arr[j]*i+temp;
            arr[j] = temp%10;
            temp = temp/10;
        }
        while(temp!=0)
        {
            arr[m]=temp%10;
            temp = temp/10;
            m++;
        }
    }
    for(int i=m-1; i>=0; i--)

    {
        cout<<arr[i];
    }
    cout<<endl;
    }

}
