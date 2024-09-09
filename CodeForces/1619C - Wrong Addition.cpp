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
#define mx 500005
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

void solve()
{

    /*
     */

    string a, s;
    cin >> a >> s;
    string b = "";
    int sza = a.size();
    int j = s.size();
    if (j - sza)
    {
        int t = j - sza;
        while (t--)
        {
            a = '0' + a;
        }
    }

    bool ok = false;
    vii v;
    --j;

    for (int i = SZ(a) - 1; i >= 0; i--)
    {
        int nowa = a[i] - '0';
        int nows = s[j] - '0';
        if (j < 0)
        {
            if (nowa)
            {
                cout << -1 << nl;
                return;
            }
            else
                continue;
        }

        if (nowa > nows)
        {
            --j;
            if (j < 0)
            {
                cout << -1 << nl;
                return;
            }
            string sub = s.substr(j, 2);
            int news = stoi(sub);
            if (news < nowa)
            {
                cout << -1 << nl;
                return;
            }
            else
            {
                int left = news - nowa;
                if (left > 9)
                {
                    cout << -1 << nl;
                    return;
                }
                b += left + '0';
            }

            j--;
        }
        else
        {
            int left = nows - nowa;
            b += left + '0';
            --j;
        }
    }

    reverse(all(b));
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != '0')
        {
            ok = true;
            cout << b[i];
        }
        else
        {
            if (ok)
            {
                cout << b[i];
            }
        }
    }
    cout << nl;
}

int main()
{
    FIO;
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}
