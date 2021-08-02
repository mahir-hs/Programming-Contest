#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 100000009
#define mx 200005
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
using namespace std;

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
int main()
{
    int x;
    cin >> x;
    vll v(x);
    for (auto &k : v)
    {
        cin >> k;
    }
    vll vv(v);
    sort(vv.begin(), vv.end());
    ull dp1[x], dp2[x];
    dp1[0] = 0;
    dp2[0] = 0;
    dp1[1] = v[0];
    dp2[1] = vv[0];
    for (int i = 2; i <= x; i++)
    {
        dp1[i] = dp1[i - 1] + v[i - 1];
        dp2[i] = dp2[i - 1] + vv[i - 1];
    }
    int y;
    cin >> y;
    while (y--)
    {
        int a, m, n;
        cin >> a >> m >> n;
        ull ans = 0;
        if (a == 1)
        {
            ans = dp1[n] - dp1[m - 1];
        }
        else
        {
            ans = dp2[n] - dp2[m - 1];
        }
        cout << ans << endl;
    }
}
