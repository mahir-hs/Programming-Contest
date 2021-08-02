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
vector<pair<ull, ull>> G[mx];
vll dist(mx, MV);
bool vis[mx] = {false};
ll node, edge;

void dijkstra(int start)
{
    priority_queue<pul, vector<pul>, greater<pul>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty())
    {
        ull primary_node = pq.top().second;
        pq.pop();
        if (vis[primary_node])
            continue;
        vis[primary_node] = true;
        for (auto &k : G[primary_node])
        {
            if (k.second + dist[primary_node] < dist[k.first])
            {
                dist[k.first] = dist[primary_node] + k.second;
                pq.push({dist[k.first], k.first});
            }
        }
    }
}
int main()
{
    cin >> node >> edge;
    for (ll i = 0; i < edge; i++)
    {
        G[i].clear();
    }
    for (ll i = 0; i < edge; i++)
    {
        ull u, v, w;
        cin >> u >> v >> w;
        G[u].pb({v, w});
    }
    dijkstra(1);
    for (ll k = 1; k <= node; k++)
    {
        cout << dist[k] << " ";
    }

    cout << endl;
}