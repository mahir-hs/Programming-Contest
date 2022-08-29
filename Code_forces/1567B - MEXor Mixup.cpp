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
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define SP(x, y) fixed << setprecision((x)) << (y)
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
int pre_xor[mx];
void solve()
{
    /*
    MEX -> minimum excluded value
    a ^ b = c
    a ^ c = b
    b ^ c = a
    1. compute the all xor of a-1.
    2. if xor (a-1) == b, then two values in the a-1 constraint
    3. if not then if c != a then add 1
    4. iff c==a, then  add 2
    */
    int a, b;
    cin >> a >> b;
    if (pre_xor[a - 1] == b)
    {
        cout << a << endl;
        return;
    }
    else if ((pre_xor[a - 1] ^ b) != a)
    {
        cout << a + 1 << endl;
        return;
    }
    else
    {
        cout << a + 2 << endl;
        return;
    }
}
int main()
{
    for (int i = 1; i < 400000; i++)
    {
        pre_xor[i] = pre_xor[i - 1] ^ i;
    }
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}