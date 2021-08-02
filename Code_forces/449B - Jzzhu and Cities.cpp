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
vector<vll> G[mx];
ll dist[mx];
int node, edge, rail;
bool train[mx];
void dijkstra(int start)
{
    djk pq;
    pq.push({0, start});
    for (int i = 2; i <= node; i++)
        dist[i] = LLONG_MAX;
    dist[start] = 0;
    while (!pq.empty())
    {
        ll primary_node = pq.top().second;
        ll primary_weight = pq.top().first;
        pq.pop();
        if (primary_weight > dist[primary_node])
            continue;
        for (auto k : G[primary_node])
        {
            ll cur_node = k[0];
            ll cur_weight = k[1];
            ll cur_path = k[2];
            if (cur_weight + primary_weight < dist[cur_node])
            {
                dist[cur_node] = cur_weight + primary_weight;
                train[cur_node] = cur_path;
                pq.push({dist[cur_node], cur_node});
            }
            else if (cur_weight + primary_weight == dist[cur_node] && train[cur_node] == 1 && cur_path == 0)
            {
                train[cur_node] = cur_path;
            }
        }
    }
}
int main()
{

    cin >> node >> edge >> rail;
    for (int i = 0; i < edge; i++)
    {
        ll u, v;
        ll w;
        cin >> u >> v >> w;
        G[u].pb({v, w, 0});
        G[v].pb({u, w, 0});
    }
    for (int i = 0; i < rail; i++)
    {
        ll u, v;
        cin >> u >> v;
        G[1].pb({u, v, 1});
        G[u].pb({1, v, 1});
    }
    dijkstra(1);
    int ans = 0;
    for (auto k : train)
    {
        ans += k;
    }
    cout << rail - ans << endl;
}