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
    string s;
    cin >> s;
    bool ans = false;
    bool ans1 = false;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && !ans)
        {
            ans = true;
            ++i;
        }
        else if (ans)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                ans1 = true;
                break;
            }
        }
    }
    if (!ans || !ans1)
    {
        ans = false;
        ans1 = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A' && !ans)
            {
                ans = true;
                ++i;
            }
            else if (ans)
            {
                if (s[i] == 'A' && s[i + 1] == 'B')
                {
                    ans1 = true;
                    break;
                }
            }
        }
    }

    if (ans && ans1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
