#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        vii v(y);
        vip vv;
        for (auto &k : v)
        {
            cin >> k;
        }
        int val = -1;
        for (int i = 1; i < y; i++)
        {
            if (v[i] != v[0])
            {
                val = i + 1;
                vv.pb({1, i + 1});
            }
        }
        if (val == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < y; i++)
        {
            if (v[i] == v[0])
            {
                vv.pb({val, i + 1});
            }
        }
        cout << "YES" << endl;
        for (auto k : vv)
        {
            cout << k.first << " " << k.second << endl;
        }
    }
}