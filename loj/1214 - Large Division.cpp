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
    cin >> x;
    while (x--)
    {
        ll y;
        string s;
        cin >> s >> y;
        ll i = 0, ans = 0;
        if (s[0] == '-')
        {
            i = 1;
        }
        for (; i < s.length(); i++)
        {
            ans = ans * 10 + s[i] - '0';
            ans = ans % y;
        }
        if (ans)
        {
            cout << "Case " << kk++ << ": not divisible" << endl;
        }
        else
        {
            cout << "Case " << kk++ << ": divisible" << endl;
        }
    }
}