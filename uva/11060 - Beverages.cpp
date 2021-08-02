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
map<int, string> done;
map<string, int> alcohol;
qii q;

int main()
{
    int a, z = 1;
    while (cin >> a)
    {
        int b;
        string s;
        alcohol.clear();
        done.clear();
        for (int i = 1; i <= a; i++)
        {
            cin >> s;
            alcohol[s] = i;
            done[i] = s;
        }
        cin >> b;
        memset(degree, 0, sizeof degree);

        for (int i = 0; i < b; i++)
        {
            string u, v;
            cin >> u >> v;
            degree[alcohol[v]]++;
            G[alcohol[u]].pb(alcohol[v]);
        }

        while (true)
        {
            int cur = 0;
            for (int i = 1; i <= a; i++)
            {
                if (!degree[i])
                {
                    degree[i] = -1;
                    q.push(i);
                    for (int j = 0; j < G[i].size(); j++)
                    {
                        degree[G[i][j]]--;
                    }
                    break;
                }
                cur++;
            }
            if (cur == a)
                break;
        }
        cout << "Case #" << z++ << ": Dilbert should drink beverages in this order:";
        while (!q.empty())
        {
            cout << " " << done[q.front()];
            q.pop();
        }
        cout << "."
             << endl
             << endl;

        for (int i = 0; i <= a; i++)
            G[i].clear();
    }
}