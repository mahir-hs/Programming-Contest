#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
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
    int x;
    while (~scanf("%d", &x))
    {
        vii v(x);
        for (auto &k : v)
        {
            cin >> k;
        }
        int ans = 1, p = 0;

        int arr[x];
        int arr1[x];
        int dp[2][x];
        memset(arr, INF, sizeof(arr));
        memset(arr1, INF, sizeof(arr1));
        for (int i = 0; i < x; i++)
        {
            p = lower_bound(arr, arr + x, v[i]) - arr;
            arr[p] = v[i];
            dp[0][i] = p;
        }
        for (int i = x - 1; i > -1; i--)
        {
            p = lower_bound(arr1, arr1 + x, v[i]) - arr1;
            arr1[p] = v[i];
            dp[1][i] = p;
        }
        for (int i = 1; i < x - 1; i++)
        {
            if (dp[0][i] && dp[1][i])
            {
                ans = max(ans, 2 * min(dp[0][i], dp[1][i]) + 1);
            }
        }
        cout << ans << endl;
    }
}
