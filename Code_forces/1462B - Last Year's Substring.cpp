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
    while (x--)
    {
        int y;
        string s;
        cin >> y >> s;
        bool ans = true;
        if (s[0] == '2' && s[y - 1] == '0' && s[y - 2] == '2' && s[1] == '0')
        {
            ans = true;
        }
        else if (s[0] == '2' && s[y - 1] == '0' && s[y - 2] == '2' && s[y - 3] == '0')
        {
            ans = true;
        }
        else if (s[y - 4] == '2' && s[y - 1] == '0' && s[y - 2] == '2' && s[y - 3] == '0')
        {
            ans = true;
        }
        else if (s[0] == '2' && s[3] == '0' && s[2] == '2' && s[1] == '0')
        {
            ans = true;
        }
        else if (s[0] == '2' && s[y - 1] == '0' && s[2] == '2' && s[1] == '0')
        {
            ans = true;
        }
        else
        {
            ans = false;
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