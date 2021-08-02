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
bool check[10000][10000];
int main()
{ // 0/1 backpack problem with path
    int x;
    while (~scanf("%d", &x))
    {
        int y;
        cin >> y;
        int arr[y + 1];
        for (int i = 0; i < y; i++)
        {
            cin >> arr[i];
        }
        int dp[x + 1];

        memset(check, false, sizeof(check));
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < y; i++)
        {
            for (int j = x; j >= arr[i]; j--)
            {
                if (dp[j - arr[i]] + arr[i] >= dp[j])
                {
                    dp[j] = max(dp[j], dp[j - arr[i]] + arr[i]);
                    check[i][j] = true;
                }
            }
        }

        for (int i = y, j = x; i >= 0; i--)
        {

            if (check[i][j])
            {
                cout << arr[i] << " ";
                j -= arr[i];
            }
        }
        cout << "sum:" << dp[x];
        cout << endl;
    }
}