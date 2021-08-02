#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
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
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{

    int x;

    int y;
    cin >> y;
    cin.ignore();
    cin.ignore();
    while (y--)
    {
        vii v;
        string ss;
        while (getline(cin, ss) && ss != "")
        {
            stringstream sss(ss);
            sss >> x;
            v.pb(x);
        }
        int s = v.size();
        int store[s + 1];
        int update[s + 1];
        int ans = 0;
        for (int i = 0; i < s; i++)
        {
            store[i + 1] = lower_bound(update + 1, update + 1 + ans, v[i]) - update;
            ans = max(ans, store[i + 1]);
            update[store[i + 1]] = v[i];
        }
        int occur = ans;
        vii final;
        for (int i = s - 1; i > -1; i--)
        {
            if (store[i + 1] == occur)
            {
                final.pb(v[i]);
                occur--;
            }
        }
        reverse(final.begin(), final.end());
        cout << "Max hits: " << ans << endl;
        for (auto k : final)
        {
            cout << k << endl;
        }
        if (y)
        {
            cout << endl;
        }
    }
}
