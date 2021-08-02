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
    int x;
    while (cin >> x)
    {
        if (x == 0)
        {
            break;
        }
        vii v(x);
        for (auto &k : v)
        {
            cin >> k;
        }

        int cur = 0, maxx = INT_MIN;

        for (int i = 0; i < x; i++)
        {
            cur += v[i];
            if (cur > maxx)
            {
                maxx = cur;
            }
            if (cur < 0)
            {
                cur = 0;
            }
        }
        if (maxx < 1)
        {
            cout << "Losing streak." << endl;
        }
        else
        {
            cout << "The maximum winning streak is " << maxx << "." << endl;
        }
    }
}