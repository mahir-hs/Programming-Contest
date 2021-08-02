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
vip G[mx];
priority_queue<pll, vlp, greater<pll>> pq;
vll dis(mx, LLONG_MAX);
vii parent(mx);
void dijkstra(int start)
{
    pq.push(mp(0, start));
    dis[start] = 0;
    while (!pq.empty())
    {
        int primary_node = pq.top().second;
        pq.pop();
        for (int i = 0; i < G[primary_node].size(); i++)
        {
            int cur_node = G[primary_node][i].first;
            int cur_weight = G[primary_node][i].second;
            if (cur_weight + dis[primary_node] < dis[cur_node])
            {
                dis[cur_node] = cur_weight + dis[primary_node];
                parent[cur_node] = primary_node;
                pq.push({dis[cur_node], cur_node});
            }
        }
    }
}
int main()
{
    FIO;
    int node, edges;
    cin >> node >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].pb({v, w});
        G[v].pb({u, w});
    }
    dijkstra(1);
    if (dis[node] == LLONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        vii v;
        v.pb(node);
        while (true)
        {
            node = parent[node];
            v.pb(node);
            if (node == 1)
                break;
        }
        reverse(all(v));
        for (auto k : v)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}
