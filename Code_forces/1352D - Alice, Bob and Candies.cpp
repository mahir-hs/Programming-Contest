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
        int a;
        cin >> a;
        vii v(a);
        for (auto &k : v)
        {
            cin >> k;
        }
        int cnt = 0;
        vii alice;
        vii bob;
        bool m = true;
        bool n = false;
        bob.pb(0);
        for (int i = 0; i < a;)
        {
            if (m)
            {
                int temp = 0;
                while (temp <= bob.back() && i < a)
                {
                    temp += v[i++];
                }
                cnt++;
                alice.pb(temp);
                m = false;
                n = true;
            }
            else if (n)
            {
                int temp = 0;
                while (alice.back() >= temp && a > i)
                {
                    temp += v[--a];
                }
                bob.pb(temp);
                cnt++;
                m = true;
                n = false;
            }
        }
        int aa = 0, bb = 0;
        for (auto p : alice)
        {
            aa += p;
        }
        for (auto p : bob)
        {
            bb += p;
        }
        cout << cnt << " " << aa << " " << bb << endl;
    }
}