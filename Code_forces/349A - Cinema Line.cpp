#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000000
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
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
    vii v(x);
    mii m;
    for (auto &k : v)
    {
        cin >> k;
    }
    bool ans = true;
    for (int i = 0; i < x; i++)
    {
        if (v[i] == 25)
            m[v[i]]++;
        else if (v[i] == 50)
        {
            if (m[25])
            {
                m[50]++;
                m[25]--;
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (v[i] == 100)
        {
            if (m[50] && m[25])
            {
                m[50]--;
                m[25]--;
            }
            else if (m[25] > 2)
            {
                m[25] -= 3;
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (!ans)
        {
            break;
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
