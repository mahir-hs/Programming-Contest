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
#define pqi priority_queue<int>
#define pql priority_queue<ll>
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
    ll x;
    cin >> x;
    while (x > 5)
    {
        x /= 2;
        x -= 2;
    }
    if (x == 1)
        cout << "Sheldon" << endl;
    if (x == 2)
        cout << "Leonard" << endl;
    if (x == 3)
        cout << "Penny" << endl;
    if (x == 4)
        cout << "Rajesh" << endl;
    if (x == 5)
        cout << "Howard" << endl;
}
