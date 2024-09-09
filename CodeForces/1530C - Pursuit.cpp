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
const ll INF = LLONG_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); //binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); //to binary
    return binary;
}

void solve()
{
    // overall i have to grater or equal then ilya's total score
    int a;
    cin >> a;
    vii v(a), vv(a);
    for (auto &k : v)
    {
        cin >> k;
    }
    for (auto &k : vv)
    {
        cin >> k;
    }
    sort(all(v));
    sort(all(vv));
    int sum1 = accumulate(v.begin(), v.end(), 0);
    int sum2 = accumulate(vv.begin(), vv.end(), 0);
    // cout << sum1 << " " << sum2 << nl;

    int first[a + 1], second[a + 1];
    mem(first, 0);
    mem(second, 0);

    for (int i = 1; i <= a; i++)
    {
        first[i] += first[i - 1] + v[i - 1];
        second[i] += second[i - 1] + vv[i - 1];
    }
    int cnt = 0;
    for (int i = 0;; i++)
    {
        int sz = a + i;
        int rem = sz / 4;
        int val1 = 100 * i + first[a] - first[rem];
        rem -= min(i, rem);
        int val2 = second[a] - second[rem];
        if (val1 >= val2)
        {
            cnt = i;
            break;
        }
    }
    cout << cnt << nl;
}

int main()
{
    FIO;
    ll x;
    cin >> x;
    while (x--)
        solve();
}