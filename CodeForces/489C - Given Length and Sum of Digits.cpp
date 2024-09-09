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
    cin >> x >> y;
    if (y == 0)
    {
        if (x == 1)
        {
            cout << 0 << " " << 0 << endl;
            return 0;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
            return 0;
        }
    }
    string a = "", b = "";
    for (int i = 0; i < x; i++)
    {
        int p = min(9, y);
        a += (p + '0');
        y -= p;
    }
    if (y > 0)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    for (int i = x - 1; i > -1; i--)
    {
        b += a[i];
    }
    int k = 0;
    while (b[k] == '0')
        k++;
    b[0]++;
    b[k]--;
    cout << b << " " << a << endl;
}