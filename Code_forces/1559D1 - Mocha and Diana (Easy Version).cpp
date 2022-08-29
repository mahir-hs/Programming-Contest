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
vii parentA(2000), parentB(2000);
vip ans;

int FindA(int target)
{
    if (target == parentA[target])
    {
        return target;
    }
    return parentA[target] = FindA(parentA[target]);
}

int FindB(int target)
{
    if (target == parentB[target])
    {
        return target;
    }
    return parentB[target] = FindB(parentB[target]);
}

void addEdge(int n, int u)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == u)
            continue;

        int searchAU = FindA(u);
        int searchAV = FindA(i);

        int searchBU = FindB(u);
        int searchBV = FindB(i);

        if (searchAU != searchAV && searchBU != searchBV)
        {
            ans.pb({u, i});
            parentA[searchAV] = searchAU;
            parentB[searchBV] = searchBU;
        }
    }
}

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    parentA.clear();
    parentB.clear();
    for (int i = 1; i <= n; i++)
    {
        parentA[i] = i;
        parentB[i] = i;
    }
    for (int i = 1; i <= a; i++)
    {
        int u, v;
        cin >> u >> v;

        int searchU = FindA(u);
        int searchV = FindA(v);

        parentA[searchV] = searchU;
    }
    for (int i = 1; i <= b; i++)
    {
        int u, v;
        cin >> u >> v;

        int searchU = FindB(u);
        int searchV = FindB(v);

        parentB[searchV] = searchU;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == parentA[i])
        {
            addEdge(n, i);
        }
    }

    cout << ans.size() << nl;
    for (auto k : ans)
    {
        cout << k.first << " " << k.second << nl;
    }
}

int main()
{
    FIO;
    solve();
}