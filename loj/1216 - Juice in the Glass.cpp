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
int z = 1;
void solve()
{
    /*
      To find missing radius in the middle when two radius is given and 
      the middle radius might be greater then or less then above first radius.

     
    tan(α) = Bottom less radius then upper / hight of the glass
           = (r1-r2)/h ...(i)

    for, middle radius 
    tan(α) = middle extra radius then bottom / hight of the juice
           = (r3-r2)/p
    => r3 - r2 = p*tan(α)
    => r3 = p*tan(α) + r2 
          = p*(r1-r2)/h + r2 [From, (i)] 

    */

    int r, rr, h, j;
    cin >> r >> rr >> h >> j;
    //first lets find the middle missing radius of juice

    double rrr = j / (h * 1.0) * (r - rr) + rr;

    //
    double ans = (pi / 3.0) * j * (rrr * rrr + rr * rr + (rrr * rr));

    cout << "Case " << z++ << ": " << SP(9, ans) << nl;
}

int main()
{
    FIO;
    ll x;
    cin >> x;
    while (x--)
        solve();
}