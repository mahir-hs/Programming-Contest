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
#define MX 1000000000
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
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;
bool vis[mx];
vii v[mx];
void dfs(int start)
{
    vis[start] = true;
    for (int p = 0; p < v[start].size(); p++)
    {
        int q = v[start][p];
        if (!vis[q])
        {
            dfs(q);
        }
    }
}
int main()
{
    mii m;
    int x, cnt = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a, b;
        cin >> a >> b;
        b += 2000;
        v[a].pb(b);
        v[b].pb(a);
        m[a]++;
        m[b]++;
    }
    memset(vis, false, sizeof vis);
    for (auto i = m.begin(); i != m.end(); i++)
    {
        int node = i->first;
        if (!vis[node])
        {
            dfs(node);
            cnt++;
        }
    }
    cout << cnt - 1;
}