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
        int y;
        cin >> y;
        vector<string> arr;
        string s;
        for (int i = 0; i < y; i++)
        {
            cin >> s;
            arr.pb(s);
        }
        bool ans = true;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            for (int j = 0; j < arr.size() - 1; j++)
            {
                if (arr[i][j] == '0')
                {
                    continue;
                }
                else
                {

                    if (arr[i][j + 1] == '1' || arr[i + 1][j] == '1' || i == y - 1 || j == y - 1)
                    {
                        continue;
                    }
                    else
                    {
                        ans = false;
                        break;
                    }
                }
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
}