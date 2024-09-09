#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
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
#define qii queue<int>
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
    while (x--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 2; i <= k - 1; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
                cnt++;
        }
        int ans = cnt;
        int cur = 1;
        for (int i = 2; i + k - 1 <= n; i++)
        {
            if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i])
                cnt--;
            if (arr[i + k - 3] < arr[i + k - 2] && arr[i + k - 1] < arr[i + k - 2]) //checking if the last new range has a peak or not
                cnt++;

            if (cnt > ans)
            {
                cur = i;
                ans = cnt;
            }
        }

        cout << ans + 1 << " " << cur << endl;
    }
}
