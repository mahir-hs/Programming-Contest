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
ll way[10001];
void coin()
{

    for (ll i = 0; i < 10001; i++)
    {
        way[i] = 0;
    }
    way[0] = 1;
    for (ll i = 1; i * i * i < 10000; i++)
    {
        for (ll j = i * i * i; j < 10000; j++)
        {

            way[j] += way[j - i * i * i];
        }
    }
}

int main()
{
    coin();
    ll x;
    while (~scanf("%d", &x))
    {
        cout << way[x] << endl;
    }
}