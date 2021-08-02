#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000
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
    ll x;
    cin >> x;
    while (x--)
    {
        ll y, k = 0;
        cin >> y;
        std::string b = std::bitset<32>(y).to_string();
        string m = "", n = "";
        bool q = 0;
        for (int i = 0; i < 32; i++)
        {
            if (b[i] == '1' && q == 0)
            {
                q = 1;
                m += '1';
                n += '0';
            }
            else if (q == 1 && b[i] == '0')
            {
                m += '1';
                n += '1';
            }
            else if (b[i] == '1' && q == 1)
            {
                n += '1';
                m += '0';
            }
            else if (b[i] == '0' && q == 0)
            {
                m += '0';
                n += '0';
            }
        }

        ll a1 = stoi(m, 0, 2);
        ll b1 = stoi(n, 0, 2);
        ll ans = a1 * b1;
        cout << ans << endl;
    }
}