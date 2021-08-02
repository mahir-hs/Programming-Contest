#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx INT_MAX
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
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    // Rectangular Parallelepiped is known as a 3D shaped rectanguar which have 3 base edge
    //Areas been given, ie: s1 = a*b...
    //Have to find out the 3 base edges so that we can find the total length of all edges
    //a = s1/b; b = s2/c; c = s3/a;
    //b = (s2*a)/s3 -> b = (s2*s1)/(s3*b) -> b^2 = (s2*s1)/s3;
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a, b, c;
    a = sqrt((s1 * s2) / s3);
    b = sqrt((s3 * s2) / s1);
    c = sqrt((s1 * s3) / s2);
    int sum = a + b + c;
    cout << sum * 4 << endl;
}