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
    mii m;
    int x;
    cin >> x;
    int y, z;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    bool ans = true;
    for (int i = 1; i <= x; i++)
    {
        if (m[i] == 0)
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}