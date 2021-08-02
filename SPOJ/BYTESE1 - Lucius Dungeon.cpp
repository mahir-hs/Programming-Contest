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
vector<vii> G;
vector<vii> vis(200, vii(200, 0));
vector<vii> dis(200, vii(200, INF));
int tx, ty, tim;
int m, n;
typedef bool (*comp)(pii, pii); //for 2D array in priority queue
bool cmp(pii a, pii b)
{
    return dis[a.first][a.second] > dis[b.first][b.second];
}
void dijkstra()
{
    priority_queue<pii, vip, comp> pq(cmp);
    dis[0][0] = G[0][0];
    vis[0][0] = 1;
    pq.push(pii(0, 0));
    while (!pq.empty())
    {
        pii primary_node = pq.top();
        pq.pop();
        int xx = primary_node.first;
        int yy = primary_node.second;
        if (xx == tx && yy == ty)
            return;
        for (int i = 0; i < 4; i++)
        {
            int cur_x = xx + fx[i];
            int cur_y = yy + fy[i];
            if (cur_x >= 0 && cur_x < m && cur_y >= 0 && cur_y < n && vis[cur_x][cur_y] == 0 && G[cur_x][cur_y] + dis[xx][yy] < dis[cur_x][cur_y])
            {
                dis[cur_x][cur_y] = G[cur_x][cur_y] + dis[xx][yy];
                vis[cur_x][cur_y] = 1;
                pq.push(pii(cur_x, cur_y));
            }
        }
    }
}
int main()
{
    int nn;
    cin >> nn;
    while (nn--)
    {

        cin >> m >> n;
        G.clear();
        for (int i = 0; i < m; i++)
        {
            vii temp;
            for (int j = 0; j < n; j++)
            {
                int tt;
                cin >> tt;
                temp.pb(tt);
                vis[i][j] = 0;
                dis[i][j] = INF;
            }
            G.pb(temp);
            temp.clear();
        }

        cin >> tx >> ty >> tim;
        dijkstra();
        if (dis[tx - 1][ty - 1] <= tim)
        {
            cout << "YES" << endl
                 << tim - dis[tx - 1][ty - 1] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}