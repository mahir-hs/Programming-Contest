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
vii lan[200];
int parrent[200];
int siz[200];
void start(int employee)
{
    for (int i = 1; i <= employee; i++)
    {
        parrent[i] = i;
        siz[i] = 1;
    }
}
int root(int tango)
{
    if (parrent[tango] != tango)
    {
        parrent[tango] = root(parrent[tango]);
    }
    return parrent[tango];
}
int Union(int x, int y)
{
    int root_x = root(x);
    int root_y = root(y);
    if (root_x == root_y)
    {
        return 0;
    }
    if (siz[root_y] > siz[root_x])
    {
        swap(root_y, root_x);
    }

    parrent[root_y] = root_x;
    siz[root_x] += siz[root_y];
    return 1;
}
int main()
{
    int a, b, zero = 0, total = 0;

    cin >> a >> b;
    start(a);
    total = a;
    for (int i = 1; i <= a; i++)
    {
        int now, languages;
        cin >> now;
        if (now == 0)
        {
            zero++;
            continue;
        }

        for (int j = 1; j <= now; j++)
        {
            cin >> languages;
            lan[languages].pb(i);
        }
    }
    for (int i = 1; i <= b; i++)
    {
        for (int j = 0; j + 1 < lan[i].size(); j++)
        {
            total -= Union(lan[i][j], lan[i][j + 1]);
        }
    }
    if (total == zero)
    {
        cout << zero << endl;
    }
    else
    {
        cout << total - 1 << endl;
    }
}