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
///cout<<"Case "<<z++<<": "<<__<<endl;

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
    unsigned long deci = std::bitset<16>(bin).to_ulong(); //binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); //to binary
    return binary;
}

///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

void solve()
{
    /*   
    25 50 75 00
    */

    string s;
    cin >> s;
    int ans = INT_MAX;
    for (int i = s.size(); i >= 0; i--)
    {
        int temp = INT_MAX;
        if (s[i] == '5')
        {
            for (int j = i - 1; j >= 0; j--)

            {
                if (s[j] == '7' || s[j] == '2')
                {
                    temp = s.size() - (i + 1);
                    if (i - j > 1)
                    {
                        temp += i - j - 1;
                    }
                    break;
                }
            }

            //cout << temp << nl;
        }
        if (s[i] == '0')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '5' || s[j] == '0')
                {
                    temp = s.size() - (i + 1);
                    if (i - j > 1)
                    {
                        temp += i - j - 1;
                    }
                    break;
                }
            }
            //cout << temp << nl;
        }
        ans = min(temp, ans);
    }
    cout << ans << nl;
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