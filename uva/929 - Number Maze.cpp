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
const int INF = 1e9;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

vector<vii> G;
int row, col;
int dijkstra()
{
    priority_queue<pip, vector<pip>, greater<pip>> pq;
    vector<vii> dist;
    dist.clear();
    vii cc(col, INF);
    dist.assign(row, cc);
    dist[0][0] = G[0][0];
    pq.push(pip(dist[0][0], pii(0, 0)));
    while (!pq.empty())
    {
        pip primary_node = pq.top();
        pq.pop();
        int rope = primary_node.first;
        int r = primary_node.second.first;
        int c = primary_node.second.second;
        for (int i = 0; i < 4; i++)
        {
            int cur_row = r + fx[i];
            int cur_col = c + fy[i];
            if (cur_row >= 0 && cur_row < row && cur_col >= 0 && cur_col < col)
            {
                if (rope + G[cur_row][cur_col] < dist[cur_row][cur_col])
                {
                    dist[cur_row][cur_col] = rope + G[cur_row][cur_col];
                    pq.push(pip(dist[cur_row][cur_col], pii(cur_row, cur_col)));
                }
            }
        }
    }
    return dist[row - 1][col - 1];
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        cin >> row >> col;
        G.clear();
        for (int i = 0; i < row; i++)
        {
            vii temp;
            for (int j = 0; j < col; j++)
            {
                int a;
                cin >> a;
                temp.pb(a);
            }
            G.pb(temp);
            temp.clear();
        }
        int ans = dijkstra();
        cout << ans << endl;
    }
}