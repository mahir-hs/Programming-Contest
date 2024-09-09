#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 100000009
#define mx 200005
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
        int a, b, j;
        cin >> a >> b;
        string s;
        cin >> s;
        int cnt = 0;
        int start = a - 1, end = 0;
        vii v;
        for (int i = 0; i < a; i++)
        {
            if (s[i] == '1')
            {
                v.pb(i);
                start = min(i, start);
                end = max(i, end);
            }
        }
        if (v.size() == 0)
        {
            cout << ((a - 1) / (b + 1)) + 1 << endl;
            continue;
        }
        cnt += start / (b + 1);
        cnt += ((a - 1) - end) / (b + 1);

        for (int i = 0; i < v.size() - 1; i++)
        {
            int k = (v[i + 1] - b - 1) - (v[i] + b); //range
            if (k > 0)
            {
                cnt += ((k - 1) / (b + 1)) + 1;
            }
        }
        cout << cnt << endl;
    }
}