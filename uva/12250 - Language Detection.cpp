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
    int k = 1;

    string s;
    while (cin >> s)
    {
        if (s == "#")
        {
            break;
        }
        string a;
        if (s == "HELLO")
        {
            a = "ENGLISH";
        }
        else if (s == "HOLA")
        {
            a = "SPANISH";
        }
        else if (s == "HALLO")
        {
            a = "GERMAN";
        }
        else if (s == "BONJOUR")
        {
            a = "FRENCH";
        }
        else if (s == "CIAO")
        {
            a = "ITALIAN";
        }
        else if (s == "ZDRAVSTVUJTE")
        {
            a = "RUSSIAN";
        }
        else
        {
            a = "UNKNOWN";
        }
        cout << "Case " << k++ << ": " << a << endl;
    }
}