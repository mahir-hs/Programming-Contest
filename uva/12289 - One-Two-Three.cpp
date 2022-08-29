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

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        int a = s.size();

        if (a > 3)
        {
            cout << 3 << endl;
        }
        else
        {
            if (s[0] == 'o' && s[1] == 'n' && s[2] == 'e')
            {
                cout << 1 << endl;
            }
            else if (s[0] == 'o' && s[1] == 'n')
            {
                cout << 1 << endl;
            }
            else if (s[0] == 'o' && s[2] == 'e')
            {
                cout << 1 << endl;
            }
            else if (s[1] == 'n' && s[2] == 'e')
            {
                cout << 1 << endl;
            }

            else if (s[0] == 't' && s[1] == 'o' && s[2] == 'w')
            {
                cout << 2 << endl;
            }
            else if (s[0] == 't' && s[1] == 'w')
            {
                cout << 2 << endl;
            }
            else if (s[0] == 't' && s[2] == 'o')
            {
                cout << 2 << endl;
            }
            else if (s[1] == 'w' && s[2] == 'o')
            {
                cout << 2 << endl;
            }
        }
    }
}