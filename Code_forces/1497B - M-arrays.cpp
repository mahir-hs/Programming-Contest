#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 2000
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
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        ll a, b;
        cin >> a >> b;
        vll v(a);
        vll vv(b, 0);
        for (ll i = 0; i < a; i++)
        {
            cin >> v[i];
            v[i] %= b;
            vv[v[i]]++;
        }
        ll ans = 0;
        if (vv[0])
        {
            ans++;
        }
        for (ll i = 1; i < b; i++)
        {
            if (vv[i])
            {
                if (abs(vv[i] - vv[b - i]) <= 1)
                {
                    ans++;
                }
                else
                {
                    ans += abs(vv[i] - vv[b - i]);
                }
                vv[b - i] = 0;
            }
        }
        cout << ans << endl;
    }
}
