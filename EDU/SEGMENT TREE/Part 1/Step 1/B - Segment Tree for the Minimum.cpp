#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/TREE_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>

// using namespace __gnu_pbds;
// using namespace __gnu_cxx;
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
#define MX 100000009
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vul vector<ull>
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
#define mp mate_pair
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
#define INF 0x3F3F3F3F

int v[mx];
ll a[mx << 4];

void build(int node, int l, int r)
{
    if (l > r)
        return;
    if (l == r)
    {
        a[node] = v[l];
        return;
    }
    int mid = (l + r) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    build(left, l, mid);
    build(right, mid + 1, r);
    a[node] = min(a[left] , a[right]);
}

void update(int node, int l, int r, int point, int val)
{
    if (point > r or point < l)
        return;
    if (l >= point and r <= point)
    {
        a[node] = val;
        return;
    }

    int mid = (l + r) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    update(left, l, mid, point, val);
    update(right, mid + 1, r, point, val);
    a[node] = min(a[left] , a[right]);
}

ll query(int node, int l, int r, int i, int j)
{
    if (i > r or j < l)
        return INF; //বাইরে চলে গিয়েছে
    if (l >= i and j >= r)
    {
        return a[node]; //রিলেভেন্ট সেগমেন্ট
    }

    int left = node * 2; //আরো ভাঙতে হবে
    int right = node * 2 + 1;
    int mid = (l + r) / 2;
    ll leftQ = query(left, l, mid, i, j);
    ll rightQ = query(right, mid + 1, r, i, j);

    return min(leftQ , rightQ); //বাম এবং ডান পাশের যোগফল
}

void solve()
{
    /*
     */

    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++)
    {
        cin >> v[i];
    }

    build(1, 1, a);
    while (b--)
    {
        int p, q, r;
        cin >> p >> q >> r;
        if (p == 1)
        {
            update(1, 1, a, q + 1, r);
        }
        else
        {
            cout << query(1, 1, a, q + 1, r ) << nl;
        }
    }
}

int main()
{
    FIO;
    // startTime = clock();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    //}

    // fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - startTime) / CLOCKS_PER_SEC);
}