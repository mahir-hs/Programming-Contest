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
    double a, b, c, abctot, abcrest, ab, bc, ca, temp, ang1, ang2, ang3;
    cin >> x;
    while (x--)
    {

        cin >> a >> b >> c;
        ab = a + b;
        bc = b + c;
        ca = a + c;
        double s = (ab + bc + ca) / 2;
        abctot = sqrt(s * (s - ab) * (s - bc) * (s - ca));
        temp = (ab * ab + ca * ca - bc * bc) / (2.0 * ab * ca);
        ang1 = acos(temp);
        double aval = (a * a * ang1) / 2.0;
        temp = (ab * ab + bc * bc - ca * ca) / (2.0 * ab * bc);
        ang2 = acos(temp);
        double bval = (b * b * ang2) / 2.0;
        temp = (bc * bc + ca * ca - ab * ab) / (2.0 * bc * ca);
        ang3 = acos(temp);
        double cval = (c * c * ang3) / 2.0;
        abcrest = aval + bval + cval;

        double finalval = abctot - abcrest;
        cout << "Case " << kk++ << ": " << fixed << setprecision(10) << finalval << endl;
    }
}