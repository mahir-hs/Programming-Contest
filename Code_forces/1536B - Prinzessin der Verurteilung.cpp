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

    int a;
    cin >> a;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < a; i++)
    {
        m[s[i]] = 1;
    }
    // for 1 character missing
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (m[i] == 0)
        {
            cout << i << nl;
            return;
        }
    }

    // for 2 character missing

    map<string, int> two;
    for (int i = 0; i < a - 1; i++)
    {
        string p = "";
        p += s[i];
        p += s[i + 1];
        two[p] = 1;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            string p = "";
            p += i;
            p += j;
            if (!two[p])
            {
                cout << p << nl;
                return;
            }
        }
    }

    // for 3 character missing

    map<string, int> three;
    for (int i = 0; i < a - 2; i++)
    {
        string p = "";
        p += s[i];
        p += s[i + 1];
        p += s[i + 2];
        three[p] = 1;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {

        for (char j = 'a'; j <= 'z'; j++)
        {
            string p = "a";
            p += i;
            p += j;
            if (!three[p])
            {
                cout << p << nl;
                return;
            }
        }
    }
}

int main()
{
    FIO;
    int x;
    cin >> x;
    while (x--)
        solve();
}