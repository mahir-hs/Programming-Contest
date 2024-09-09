#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000000
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
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
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    ll s = 1;
    ll h = 1000000000;
    ll pp = 2;
    vll v;
    v.pb(INT_MIN);
    while (pp <= h)
    {
        v.pb(pp);
        s++;
        pp += (s * 2) + (s - 1);
    }
    int x;
    cin >> x;
    while (x--)
    {
        ll a, cnt = 0;
        cin >> a;

        while (a > 0)
        {
            int t = upper_bound(all(v), a) - v.begin();
            t--;
            if (t == 0 || a < 0)
                break;
            else
                cnt++;
            a -= v[t];
        }

        cout << cnt << endl;
    }
}
