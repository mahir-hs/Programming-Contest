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
#define MX 10000008
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
#define qii queue<int>
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

vll G[MX];
ll degree[MX];
priority_queue<ll, vll, greater<ll>> q;
vll ans;
void topsort()
{
    while (!q.empty())
    {
        ll primary_node = q.top();
        q.pop();
        ans.pb(primary_node);
        for (auto cur : G[primary_node])
        {
            degree[cur]--;
            if (degree[cur] == 0)
            {
                q.push(cur);
            }
        }
    }
}
int main()
{
    ll n, m;
    cin >> n >> m;
    memset(degree, 0, sizeof degree);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        G[u].pb(v);
        degree[v]++;
    }
    for (ll i = 1; i <= n; i++)
    {
        if (degree[i] == 0)
            q.push(i);
    }
    topsort();
    if (ans.size() == n)
    {
        for (auto k : ans)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Sandro fails." << endl;
    }
}