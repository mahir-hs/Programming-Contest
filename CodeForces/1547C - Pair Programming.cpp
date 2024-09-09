#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vuu vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define nl endl

#define SP(x, y) fixed << setprecision((x)) << (y)
const ll INF = LLONG_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vii v(b);
    vii vv(c);
    for (auto &k : v)
    {
        cin >> k;
    }
    for (auto &k : vv)
    {
        cin >> k;
    }

    vii ans;

    bool yo = true;
    int i = 0, j = 0, cnt = 0;

    while (i < b || j < c)
    {

        if (v[i] == 0 && i<b)
        {
            ans.pb(v[i]);
            a++;
            i++;
        }
        else if (vv[j] == 0 && j<c)
        {
            ans.pb(vv[j]);
            a++;
            j++;
        }
        else if( v[i]<=a && i<b)
        {
            ans.pb(v[i]);
            i++;
        }
        else if(vv[j]<=a && j<c)
        {
            ans.pb(vv[j]);
            j++;
        }
        else
        {
            yo = false;
            break;
        }
       
    }

    if (yo)
    {
        for (auto k : ans)
        {
            cout << k << " ";
        }
    }
    else
    {
        cout << -1;
    }
    cout  << nl;
}

int main()
{
    FIO;
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}