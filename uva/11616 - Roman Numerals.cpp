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

int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
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

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;
map<char, int> m;
void solve()
{
    /*

     */
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
}

int main()
{
    solve();
    FIO;
    string s;
    while (cin >> s)
    {
        if (isdigit(s[0]))
        {
            string rom[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
            int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
            string ans = "";
            stringstream ss;
            ss << s;
            int now;
            ss >> now;
            for (int i = 0; i < 13;i++)
            {
                while(now>=val[i])
                {
                    ans += rom[i];
                    now -= val[i];
                }
            }
            cout << ans << nl;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'I')
                {
                    if (s[i + 1] == 'V' || s[i + 1] == 'X')
                    {
                        ans += m[s[i + 1]] - m[s[i]];
                        ++i;
                    }
                    else
                        ans += m[s[i]];
                }
                else if (s[i] == 'X')
                {
                    if (s[i + 1] == 'L' || s[i + 1] == 'C')
                    {
                        ans += m[s[i + 1]] - m[s[i]];
                        ++i;
                    }
                    else
                        ans += m[s[i]];
                }
                else if (s[i] == 'C')
                {
                    if (s[i + 1] == 'D' || s[i + 1] == 'M')
                    {
                        ans += m[s[i + 1]] - m[s[i]];
                        ++i;
                    }
                    else
                        ans += m[s[i]];
                }
                else
                    ans += m[s[i]];
            }
            cout << ans << nl;
        }
    }
}
