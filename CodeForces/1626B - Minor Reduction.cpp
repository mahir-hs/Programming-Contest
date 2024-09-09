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
#define MX 100000009
#define mx 1000006
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
#define SZ(r) r.size()
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
}
string toBinary(ll decimal)
{
    string t = "";
    for (int i = 31; i >= 0; i--)
    {
        ll k = decimal >> i;
        if (k & 1)
            t += "1";
        else
            t += "0";
    }
    return t;
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

void solve()
{
    /*

     */

    string s, ss;
    cin >> s;
    ss = s;

    if (SZ(ss) > 2)
        for (int i = SZ(ss) - 1; i > 1; i--)
        {
            int now = ss[i - 1] - '0';
            int nxt = ss[i] - '0';
            //  cout << now << " " << nxt << nl;
            if (now + nxt > 9)
            {
                int p = now + nxt;
                int pp = p / 10 + '0';
                p = p % 10 + '0';
                ss[i - 1] = pp;
                ss[i] = p;
                cout << ss << nl;
                return;
            }
        }

    for (int i = 0; i < SZ(s); i++)
    {
        int now = s[i] - '0';
        int nxt = s[i + 1] - '0';
        int p = now + nxt;
        cout << p;
        for (int j = i + 2; j < SZ(s); j++)
        {
            cout << s[j];
        }

        cout << nl;
        return;
    }
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
