#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 210
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

    ll x, kk = 1;
    int ax, ay, bx, by, ox, oy;
    double oa, ab, ob, theta, distance;
    cin >> x;
    while (x--)
    {
        cin >> ox >> oy >> ax >> ay >> bx >> by;
        oa = sqrt(pow((ox - ax), 2) + pow((oy - ay), 2));
        ab = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
        theta = acos((2 * oa * oa - ab * ab) / (2 * oa * oa));
        distance = theta * oa;

        cout << "Case " << kk++ << ": " << fixed << setprecision(10) << distance << endl;
    }
}