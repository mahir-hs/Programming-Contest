#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;

int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        ull n, k;
        cin >> n >> k;
        ll val = 0;
        for (ll i = 1; i <= 999999; i++)
        {
            if (k <= (i * (i - 1) / 2))
            {
                val = i;
                break;
            }
        }
        ll val2 = val - ((val * (val - 1) / 2) - k) - 1;
        string s(n, 'a');
        s[n - val] = s[n - val2] = 'b';
        cout << s << endl;
    }
}
