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
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
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
vii prime;
bool check[1001];

void sieve()
{
    check[0] = true;
    check[1] = true;
    for (int i = 3; i * i <= 1000; i += 2)
    {
        for (int j = i * i; j <= 1000; j += i * 2)
        {
            check[j] = true;
        }
    }
    prime.pb(2);
    for (int i = 3; i <= 1000; i += 2)
    {
        if (!check[i])
        {
            prime.pb(i);
        }
    }
}

bool cmp(pii p, pii q)
{
    if (p.second != q.second)
    {
        return p.second < q.second;
    }
    return p.first > q.first;
}

pii v[1000];
void divisorSieve()
{
    for (int i = 1; i <= 1000; i++)
    {
        v[i - 1].first = i;
        for (int j = i; j <= 1000; j += i)
        {
            v[j - 1].second++;
        }
    }

    sort(v, v + 1000, cmp);
}

void solve()
{
    /*
        #1  x er divisor < y er divisor
        #2  x er divisor == y er divisor && x > y 

        now we can solve with the sum of power of prime number of the given number
        or
        we can hack it with the divisor sieve with  O(n log n)
        since the outer loop will be working as n/i and if we so the calculus on it
        it will give the best time complexity result then the previous idea
   */

    int a;
    cin >> a;
    cout << "Case " << z++ << ": " << v[a - 1].first << endl;
}

int main()
{
    FIO;
    divisorSieve();
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}