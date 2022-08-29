#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vuu vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
/// cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}
//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}
// bool isValid(int x, int y)
// {
//     if (x >= 0 && y >= 0 && x < x && y < y && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;
int n;
vll v;
vector<vii> maximum, minimum;
int LOG[1000010];
void preLog()
{
    for (int i = 2; i <= 1000010; i++)
    {
        LOG[i] = LOG[i / 2] + 1;
    }
}
void sparseTable()
{
    preLog();
    maximum.assign(n, vii(22));
    minimum.assign(n, vii(22));

    for (int i = 0; i < n; i++)
    {
        maximum[i][0] = v[i];
        minimum[i][0] = v[i];
    }

    for (int j = 1; j <= LOG[n]; j++)
    {
        for (int i = 0; i + (1 << j) <= n; i++)
        {
            maximum[i][j] = max(maximum[i][j - 1], maximum[i + (1 << (j - 1))][j - 1]);
            minimum[i][j] = min(minimum[i][j - 1], minimum[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int maxqueue(int l, int r)
{
    if (l > r)
        return -1e9;
    int k = LOG[r - l + 1];
    return max(maximum[l][k], maximum[r - (1 << k) + 1][k]);
}

int minqueue(int l, int r)
{
    int k = LOG[r - l + 1];

    return min(minimum[l][k], minimum[r - (1 << k) + 1][k]);
}

void solve()
{

    /*

    */
    int a, b;
    cin >> a >> b;

    double fastestMiddle = minqueue(a, b);

    double slowestMiddle = maxqueue(a, b);

    double outside = max(maxqueue(0, a - 1), maxqueue(b + 1, n - 1));

    double ans = max((slowestMiddle - fastestMiddle) / 2, outside);
    cout << SP(1, ans + fastestMiddle) << nl;
}

int main()
{
    FIO;

    cin >> n;
    v.resize(n);
    cin >> v;
    sparseTable();
    int q;
    cin >> q;
    while (q--)
    {
        solve();
    }
}