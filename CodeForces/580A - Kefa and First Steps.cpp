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
    int x;
    cin >> x;
    int cnt = 0, ans = 0;
    ll arr[x + 1];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            ans = max(ans, ++cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    cout << ans + 1 << endl;
}