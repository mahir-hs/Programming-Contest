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
ll a;
ll diff[200005];
ll v[200005][22];
void sparseTable()
{

    for (ll i = 1; i <= a; i++)
    {
        v[i][0] = diff[i];
    }
    for (ll j = 1; (1 << j) <= a; j++)
    {
        for (ll i = 1; i + (1 << j) - 1 <= a; i++)
        {
            v[i][j] = gcd(v[i][j - 1], v[i + (1 << (j - 1))][j - 1]);
        }
    }
}

ll query(ll left, ll right)
{
    ll len = right - left + 1;
    len = __lg(len);

    return gcd(v[left][len], v[right - (1 << len) + 1][len]);
}

bool check(ll middle)
{
    for (ll i = 1; i + middle - 1 <= a; i++)
    {
        if (query(i, i + middle - 1) >= 2)
        {
            return true;
        }
    }
    return false;
}

void solve()
{

    /*

    */

    cin >> a;
    vll vv(a);
    cin >> vv;
    a--;

    for (ll i = 1; i <= a; i++)
    {
        diff[i] = abs(vv[i] - vv[i - 1]);
    }
    sparseTable();

    ll low = 1, high = a, ans = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        bool ok = check(mid);
        if (ok)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans + 1 << nl;
}

int main()
{
    FIO;
    int x;
    cin >> x;

    while (x--)
        solve();
}
