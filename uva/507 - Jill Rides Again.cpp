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

///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    int x, z = 1;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        vii v;
        for (int p = 0; p < y - 1; p++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        int cur = 0, maxx = INT_MIN, maxxi, maxxj, curj = 1;

        for (int i = 0; i < y - 1; i++)
        {
            cur += v[i];
            if (cur > maxx || (cur == maxx && (maxxi - maxxj < i - curj)))
            {
                maxx = cur;
                maxxj = curj;
                maxxi = i;
            }
            if (cur < 0)
            {
                cur = 0;
                curj = i + 2;
            }
        }
        if (maxx < 1)
        {
            cout << "Route " << z++ << " has no nice parts" << endl;
        }
        else
        {
            cout << "The nicest part of route " << z++ << " is between stops " << maxxj << " and " << maxxi + 2 << endl;
        }
    }
}