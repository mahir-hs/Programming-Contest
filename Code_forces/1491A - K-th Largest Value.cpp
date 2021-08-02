#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
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
    ll x, y, cnt = 0;
    cin >> x >> y;
    ll arr[x];

    for (ll i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cnt++;
        }
    }
    while (y--)
    {
        ll a[x];

        int m, n;
        cin >> m >> n;
        if (m == 1)
        {
            ll temp = arr[n - 1];
            arr[n - 1] = 1 - temp;
            if (arr[n - 1] == 0)
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
        }
        else if (m == 2)
        {
            if (cnt >= n)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}