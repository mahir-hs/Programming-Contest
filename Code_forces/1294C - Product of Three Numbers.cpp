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
    while (x--)
    {
        ll a;
        cin >> a;
        vii v;
        int m = 0, n = 0, o = 0;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                v.pb(i);
                a /= i;
                m = i;
                break;
            }
        }
        if (m == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = m + 1; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                v.pb(i);
                a /= i;
                n = i;
                break;
            }
        }
        if (n == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        o = a;
        v.pb(a);

        if (v.size() == 3 && v[0] != v[1] && v[0] != v[2] && v[1] != v[2])
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}