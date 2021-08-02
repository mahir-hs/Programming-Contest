#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx INT_MAX
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;
ull dp[30001];
void coin()
{
    for (ll i = 0; i <= 30001; i++)
    {
        dp[i] = 0;
    }
    dp[0] = 1;
    int arr[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
    for (ll i = 0; i < 11; i++)
    {
        for (ll j = 1; j <= 30000; j++)
        {
            if (arr[i] <= j)
            {
                dp[j] += dp[j - arr[i]];
            }
        }
    }
}
int main()
{
    coin();
    double x;
    while (~scanf("%lf", &x))
    {
        if (x == 0.0)
        {
            break;
        }
        ll y = (x * 100 + 0.5);
        printf("%6.2f%17lld\n", y * 1.0 / 100, dp[y]);
    }
}