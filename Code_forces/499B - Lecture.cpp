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
    int x, n;
    cin >> x >> n;
    map<int, vector<pair<string, string>>> m;
    pair<string, string> p;
    string c, d;
    for (int i = 1; i <= n; i++)
    {
        cin >> c >> d;
        p.first = c;
        p.second = d;
        m[i].pb(p);
    }
    string a;
    string b = "";
    for (int i = 1; i <= x; i++)
    {
        cin >> a;
        for (int j = 1; j <= n; j++)
        {
            if (m[j][0].first == a || m[j][0].second == a)
            {
                int p, q, w;
                p = a.size();
                q = m[j][0].first.size();
                w = m[j][0].second.size();
                if (p <= q && p <= w)
                {
                    b += m[j][0].first;
                    b += " ";
                }
                else
                {
                    b += m[j][0].second;
                    b += " ";
                }
            }
        }
    }
    cout << b << endl;
}