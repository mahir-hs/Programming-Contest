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
    int a, d;
    double b, c;
    double arr[101];
    while (cin >> a >> b >> c >> d)
    {
        if (a < 0)
        {
            break;
        }

        int cnt = 0;
        double y;
        int x;
        while (d--)
        {
            cin >> x >> y;
            for (int j = x; j < 101; j++)
            {
                arr[j] = y;
            }
        }
        double cur = c / a;
        double now = (b + c) * (1 - arr[0]);

        while (now < c)
        {
            cnt++;
            c -= cur;
            now = now * (1 - arr[cnt]);
        }
        cout << cnt << " month";
        if (cnt != 1)
            cout << "s";
        cout << endl;
    }
}