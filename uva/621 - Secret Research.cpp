#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define mii map<int, int>
#define mll map<ll, ll>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
// cout << "Case " << z++ << ": " << "__" << endl;
int main()
{
    string s;
    int z;
    cin >> z;
    while (z--)
    {
        cin >> s;
        int l = s.size();
        if (s == "1" || s == "4" || s == "78")
        {
            cout << "+" << endl;
        }
        else if (s[l - 2] == '3' && s[l - 1] == '5')
        {
            cout << "-" << endl;
        }
        else if (s[0] == '9' && s[l - 1] == '4')
        {
            cout << "*" << endl;
        }
        else if (s[0] == '1' && s[1] == '9' || s[2] == '0')
        {
            cout << "?" << endl;
        }
        else
        {
            cout << "+" << endl;
        }
    }
}