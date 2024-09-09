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
const regex pattern("^0+(?!$)");
//string s = bitset<32>(int).to_string();
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
    while (x--)
    {
        int y;
        cin >> y;
        vii v(y);
        for (auto &k : v)
        {
            cin >> k;
        }
        vii ::iterator itr;
        itr = find(v.begin(), v.end(), 1);
        int a = itr - v.begin();
        a++;
        itr = find(v.begin(), v.end(), y);
        int b = itr - v.begin();
        b++;
        int f1 = y - a + 1;
        int f2 = y - b + 1;

        int ans1 = min(a, f1);
        int ans2 = min(b, f2);
        int div = ans1 + ans2;
        int xx = abs(a - b);
        int l = max(f1, f2);
        int lll = max(a, b);
        if (min(l, lll) < div)
        {
            cout << min(l, lll) << endl;
        }
        else
            cout << div << endl;
    }
}
