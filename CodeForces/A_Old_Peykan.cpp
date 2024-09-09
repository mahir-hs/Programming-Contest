#include <bits/stdc++.h>

using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define int ll
#define EPS 0.00000001
#define mod 998244353
const int mx = 3e5 + 300;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define graph vector<vii>
#define pii pair<int, int>
#define mii map<int, int>
#define vip vector<pair<int, int>>
#define djk priority_queue<pii, vip, greater<pii>>
#define pb push_back
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define inf 0x3F3F3F3F
#define ff first
#define ss second
#define sz(s) s.size()

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};

template <class T>
inline T bitOn(T n, T pos) { return n | ((T)1 << pos); }
template <class T>
inline T bitOff(T n, T pos) { return n & ~((T)1 << pos); }
template <class T>
inline T isOn(T n, T pos) { return (bool)(n & ((T)1 << pos)); }

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
    {
        is >> in;
    }
    return is;
}

template <class T>
istream &operator>>(istream &is, vector<pair<T, T>> &input)
{
    for (auto &[i, n] : input)
    {
        is >> i >> n;
    }
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec)
{
    for (auto &a : vec)
        cout << a << " ";
    return os;
}

ostream &operator<<(ostream &os, const vector<pair<int, int>> &vec)
{
    for (auto &a : vec)
        cout << a.ff << " " << a.ss << nl;
    return os;
}

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

void solve()
{
    int m, k;
    cin >> m >> k;
    vii d(m), s(m);
    cin >> d >> s;

    int ans = 0, fuel = 0, high = 0;
    for (int i = 0; i < m; i++)
    {
        fuel += s[i];
        high = max(high, s[i]);
        while (fuel < d[i])
        {
            ans += k;
            fuel += high;
        }
        if (fuel >= d[i])
        {
            fuel -= d[i];
            ans += d[i];
        }
        else
        {
            int x = high;
            int div = (d[i] - fuel) / x;
            if (div == 0)
            {
                ans += k;
                ans += d[i];
                fuel = fuel + x - d[i];
            }
            else
            {
                int now = div * x;
                now += fuel;
                if (now >= d[i])
                {
                    fuel = now - d[i];
                    ans += d[i];
                    ans += (div * k);
                }

                else
                {
                    now += x;
                    div += 1;
                    fuel = now - d[i];
                    ans += d[i];
                    ans += (div * k);
                }
            }
        }
    }

    cout << ans << nl;
}

signed main()
{
    FIO;
    solve();
}