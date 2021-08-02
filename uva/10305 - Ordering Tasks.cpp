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

int degree[mx];
vii G[mx];
vii done;
qii q;
void topsort()
{
    while (!q.empty())
    {
        int primary_node = q.front();
        q.pop();
        done.pb(primary_node);
        for (int i = 0; i < G[primary_node].size(); i++)
        {
            int cur_node = G[primary_node][i];
            degree[cur_node]--;
            if (degree[cur_node] == 0)
            {
                q.push(cur_node);
            }
        }
    }
}
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            break;
        }
        memset(degree, 0, sizeof degree);
        done.clear();
        for (int i = 0; i < b; i++)
        {
            int u, v;
            cin >> u >> v;
            degree[v]++;
            G[u].pb(v);
        }
        for (int i = 1; i <= a; i++)
        {
            if (degree[i] == 0)
            {
                q.push(i);
            }
        }
        topsort();
        for (int i = 0; i < done.size() - 1; i++)
        {
            cout << done[i] << " ";
        }
        cout << done[done.size() - 1] << endl;
        for (int i = 1; i <= a; i++)
            G[i].clear();
    }
}