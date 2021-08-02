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
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;
int arr[200][200], sum[200][200], x;
void total()
{
    memset(sum, 0, sizeof(sum));
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            sum[i][j] = sum[i - 1][j] + arr[i][j];
        }
    }
}
int solve()
{
    total();
    int ans = INT_MIN;
    for (int i = 1; i <= x; i++)
    {
        for (int j = i; j <= x; j++)
        {
            int val = 0;
            for (int k = 1; k <= x; k++)
            {
                val += sum[j][k] - sum[i - 1][k];
                ans = max(ans, val);
                if (val < 0)
                {
                    val = 0;
                }
            }
        }
    }
    return ans;
}

int main()
{

    while (scanf("%d", &x) != EOF)
    {

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= x; j++)
            {
                cin >> arr[i][j];
            }
        }

        cout << solve() << endl;
    }
}