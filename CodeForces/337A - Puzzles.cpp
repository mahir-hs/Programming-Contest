#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define mii map<int, int>
#define mll map<ll, ll>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
// cout << "Case " << z++ << ": " << "__" << endl;
/* 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/

int main()
{
    int x, y, ans = INT_MAX;
    cin >> x >> y;
    vii v(y);
    for (auto &k : v)
    {
        cin >> k;
    }
    sort(v.begin(), v.end());
    if (y == x)
    {
        ans = v.back() - v[0];
        cout << ans << endl;
        return 0;
    }
    int cur = y - x;
    cur = y - cur;
    for (int i = y - 1; i >= cur - 1; i--)
    {
        int p = v[i] - v[i - x + 1];
        ans = min(ans, p);
    }
    cout << ans << endl;
}
