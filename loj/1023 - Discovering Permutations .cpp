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

    int T;
    int cnt = 0;
    cin >> T;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(T--)
    {
        int n, m;
        cin >> n >> m;
        string t = s;
        int ct = 0;
        printf("Case %d:\n", ++cnt);
        while(ct < m)
        {
            for(int i = 0; i < n; i++)

               {
                    printf("%c", t[i]);
               }
            printf("\n");
            ct++;
            next_permutation(t.begin(), t.begin() + n);
            if(t == s)
                break;
        }
    }
    return 0;


}
