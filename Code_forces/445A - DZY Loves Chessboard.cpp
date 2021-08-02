#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define mii map<int, int>
#define mll map<ll, ll>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
// cout << "Case " << z++ << ": " << "__" << endl;
/* 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/

int main()
{
    int x, y;
    cin >> x >> y;
    vector<string> v;

    for (int i = 0; i < x; i++)
    {
        string s = "";
        for (int j = 0; j < y; j++)
        {
            char c;
            cin >> c;
            if (c == '-')
            {
                s += "-";
            }
            else
            {
                if (i % 2 == 0 && j % 2 == 0)
                {
                    s += "B";
                }
                else if (i % 2 == 0 && j % 2 == 1)
                {
                    s += "W";
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    s += "W";
                }
                else if (i % 2 == 1 && j % 2 == 1)
                {
                    s += "B";
                }
            }
        }
        v.pb(s);
    }
    for (auto k : v)
    {
        cout << k << endl;
    }
}