#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        int si=a.size();
        for(int i=0; i<si; i++)
        {
            int cnt=0;
            if(a[i]!=' ')
            {
                while(a[i+cnt]!=' ' && i+cnt<si)
                {
                    cnt++;
                }
                for(int j=(i+cnt)-1; j>=i && j<si; j--)
                {
                    cout<<a[j];
                }
                i+=cnt-1;
            }
            else
            {
                cout<<a[i];
            }

        }

        cout<<endl;
    }

}
