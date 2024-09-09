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
    int x;
    cin >> x;
    while (x--)
    {
        ll a, b;
        cin >> a >> b;
        ll cnt = 0;
        ll ans = MV;
        for (ll i = 0; i * i <= a; i++)
        {
            if (b == 1 && i == 0)
            {
                continue;
            }
            cnt = i;
            ll y = a;
            while (y)
            {
                y /= (b + i);
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
}