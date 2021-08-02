#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
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
int node;
vlp G[mx];

ll dist[mx] = {0};
int dijkstra(int start)
{
    priority_queue<pll, vlp, greater<pll>> pq;
    for (int y = 1; y <= node; y++)
        dist[y] = 1e9;
    bool vis[mx] = {false};
    pq.push({0, start});
    dist[start] = 0;
    while (!pq.empty())
    {
        int primary_node = pq.top().second;
        pq.pop();
        if (!vis[primary_node])
            vis[primary_node] = true;
        else
            continue;
        for (int i = 0; i < G[primary_node].size(); i++)
        {
            ll cur_node = G[primary_node][i].first;
            ll cur_weight = G[primary_node][i].second;
            if (cur_weight + dist[primary_node] < dist[cur_node])
            {
                dist[cur_node] = cur_weight + dist[primary_node];
                pq.push({dist[cur_node], cur_node});
            }
        }
    }
    ll fin = 0;
    int k;

    for (int i = 1; i <= node; i++)
    {
        if (fin < dist[i])
        {
            fin = dist[i];
            k = i;
        }
    }
    return k;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> node;
        for (int i = 1; i <= node; i++)
        {
            G[i].clear();
        }
        for (int i = 0; i < node - 1; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            G[u].pb({v, w});
            G[v].pb({u, w});
        }
        ll max = dijkstra(1);
        ll ans = dist[dijkstra(max)];
        cout << ans << endl;
    }
}