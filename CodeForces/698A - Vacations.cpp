#include <bits/stdc++.h>
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
#define mx 200005
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
using namespace std;

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

int main()
{
    int x;
    cin >> x;
    int dp[101][3];
    memset(dp, MX, sizeof(dp));
    dp[0][0] = 0;
    for (int i = 1; i <= x; i++)
    {
        int a;
        cin >> a;
        dp[i][0] = min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2])) + 1;
        if (a == 1)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        if (a == 2)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
        if (a == 3)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
    }
    cout << min(dp[x][0], min(dp[x][1], dp[x][2])) << endl;
}