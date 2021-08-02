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
    int x;
    cin >> x;
    while (x--)
    {
        int y, s;
        cin >> y;
        s = 2 * y;
        vii v(y);

        for (auto &u : v)
        {
            cin >> u;
        }
        vii z;
        vii g(v);
        vii t;
        sort(g.begin(), g.end());

        int cnt = 0, ans = 1;
        for (int i = 0; i < y; i++)
        {
            int val = v[i];
            cnt = val + 1;
            if (cnt > s)
            {
                ans = -1;
                break;
            }
            z.pb(val);
            t.pb(val);
            sort(t.begin(), t.end());
            if (binary_search(g.begin(), g.end(), cnt) || binary_search(t.begin(), t.end(), cnt))
            {

                while (binary_search(g.begin(), g.end(), cnt) || binary_search(t.begin(), t.end(), cnt))
                {
                    cnt++;
                    if (cnt > s)
                    {
                        ans = -1;
                        break;
                    }
                }
            }
            z.pb(cnt);
            t.pb(cnt);
        }
        if (ans == 1)
        {
            for (auto k : z)
            {
                cout << k << " ";
            }
        }
        else
        {
            cout << ans;
        }

        cout << endl;
    }
}