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
int arr[1001][1001];
vii v;
vii vv;
int main()
{

    int x;
    cin >> x;
    while (x--)
    {

        v.clear();
        vv.clear();
        while (true)
        {
            int a;
            cin >> a;
            if (a == 0)
                break;
            v.pb(a);
        }

        int ans = 0;
        while (true)
        {
            memset(arr, 0, sizeof arr);
            vv.clear();
            int a;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            vv.pb(a);
            while (true)
            {
                cin >> a;
                if (a == 0)
                {
                    break;
                }
                vv.pb(a);
            }

            for (int i = 0; i <= v.size(); i++)
            {
                for (int j = 0; j <= vv.size(); j++)
                {
                    if (i == 0 || j == 0)
                    {
                        arr[i][j] = 0;
                        continue;
                    }
                    else if (v[i - 1] == vv[j - 1])
                    {
                        arr[i][j] = 1 + arr[i - 1][j - 1];
                    }
                    else
                    {
                        arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
                    }
                }
            }
            ans = max(ans, arr[v.size()][vv.size()]);
        }
        cout << ans << endl;
    }
}
