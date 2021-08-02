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

int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
        {
            break;
        }
        //int fee[y + 1], fun[y + 1];
        vector<pii> v;

        int dp[y + 1][x + 1];
        bool check[x + 1][x + 1];
        memset(dp, 0, sizeof dp);
        memset(check, false, sizeof check);
        for (int i = 0; i < y; i++)
        {
            int a, b;
            cin >> a >> b;
            v.pb({a, b});
        }

        for (int i = 1; i <= y; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                if (v[i - 1].first <= j)
                {
                    dp[i][j] = max(dp[i - 1][j - v[i - 1].first] + v[i - 1].second, dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        int sum = dp[y][x];
        int ans = 0;
        for (int i = 0; i <= x; i++)
        {
            if (dp[y][i] == sum)
            {
                ans = i;
                break;
            }
        }
        cout << ans << " " << sum << endl;
    }
}