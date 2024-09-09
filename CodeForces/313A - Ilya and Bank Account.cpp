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
/* 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/

int main()
{
    int x;
    cin >> x;
    string s = to_string(x);
    int y = 0;
    if (x > -1)
    {
        cout << x << endl;
        return 0;
    }
    else
    {

        if (s.back() > s[s.size() - 2])
        {
            y = s.size() - 1;
        }
        else
        {
            y = s.size() - 2;
        }
    }
    s.erase(s.begin() + y);
    stringstream ss(s);
    int k;
    ss >> k;
    cout << k << endl;
}
