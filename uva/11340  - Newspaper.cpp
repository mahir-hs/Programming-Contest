#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        int b;
        cin>>b;
        char arr[b];
        int arr1[b];
        for(int i=0; i<b; i++)
        {
            cin>>arr[i]>>arr1[i];
        }
        int c=0;
        int h=0;
        cin>>c;
        cin.ignore();
        for(int l=0; l<c; l++)
        {
            string x;
            getline(cin,x);

            for(int j=0; j<b; j++)
            {
                for(int k=0; k<x.size(); k++)
                {
                    if(x[k]==arr[j])
                    {
                        h+=arr1[j];
                    }
                }
            }
        }
        cout<<fixed<<setprecision(2)<<(h*1.0)/100<<"$"<<endl;
    }

}
