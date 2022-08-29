#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
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

int main()
{
    // f1 = x
    // f2 = y
    // f3 = f2 - f1
    // f4 = f3 - f2 = f2 - f2 - f1(x)
    // f5 = f4 - f3 = -f1 - f2(y) - f1
    // f6 = f5 - f4 = -f2(y) - f1(x) = f1(x) - f2(y)
    // f7 = f6 - f5 =  -f2(y) - f1(x) - f2(y)

    int x, y, n;
    cin >> x >> y >> n;
    n = n % 6;
    int ans = 0;
    if (n == 1)
    {
        ans = x;
    }
    if (n == 2)
    {
        ans = y;
    }
    if (n == 3)
    {
        ans = y - x;
    }
    if (n == 4)
    {
        ans = -x;
    }
    if (n == 5)
    {
        ans = -y;
    }
    if (n == 0)
    {
        ans = x - y;
    }
    cout << ((ans % 1000000007) + 1000000007) % 1000000007 << endl;
}