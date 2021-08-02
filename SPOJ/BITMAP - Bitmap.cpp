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
int n, m;
queue<pii> q;
vector<vii> G;
void bfs(vector<vii> *vis)
{
    while (!q.empty())
    {
        pii primary_node = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = primary_node.first + fx[i];
            int y = primary_node.second + fy[i];
            if (x >= 0 && x < m && y >= 0 && y < n)
            {
                if (vis->at(primary_node.first)[primary_node.second] + 1 < vis->at(x)[y])
                {
                    vis->at(x)[y] = vis->at(primary_node.first)[primary_node.second] + 1;
                    pii new_node(x, y);
                    q.push(new_node);
                }
            }
        }
    }
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        cin >> m >> n;
        G.clear();
        vii col(n, 0);
        vector<vii> vis(m, col);
        string s;
        for (int i = 0; i < m; i++)
        {
            cin >> s;
            vii temp;
            for (int j = 0; j < n; j++)
            {
                vis[i][j] = 1 << 30;
                int cur = s[j] - '0';
                if (cur == 1)
                {
                    pii p(i, j);
                    q.push(p);
                    vis[i][j] = 0;
                }
                temp.pb(cur);
            }
            G.pb(temp);
        }
        bfs(&vis);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (G[i][j] == 0)
                {
                    int res = vis[i][j];
                    if (j + 1 < n)
                    {
                        cout << res << " ";
                    }
                    else
                        cout << res;
                }
                else
                {
                    if (j + 1 < n)
                    {
                        cout << 0 << " ";
                    }
                    else
                        cout << 0;
                }
            }
            cout << endl;
        }
    }
}