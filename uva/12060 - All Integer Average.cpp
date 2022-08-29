#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 100000009
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vuu vector<ull>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}
//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}
// bool is(int x, int y)
// {
//     if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

void solve()
{
    /*


     */
}

int main()
{
    FIO;
    int t;
    while (cin >> t)
    {
        if (t == 0)
            break;

        vii v(t);
        cin >> v;
        int sum = accumulate(all(v), 0);
        int avg = abs(sum / t);
        int modules = abs(sum % t);
        cout << "Case " << z++ << ":" << nl;
        if (modules == 0)
        {
            if (sum < 0)
                cout << '-' << " ";
            cout << avg << nl;
        }

        else if (avg < 1)
        {
            int g = gcd(t, modules);
            while (gcd(t, modules) > 1)
            {
                int nn = gcd(t, modules);
                t /= nn;
                modules /= nn;
            }
            string s = to_string(t);
            string ss = to_string(modules);

            if (s.size() == ss.size())
            {
                int cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }

                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << ss << nl;
                if (sum < 0)
                    cout << '-' << " ";
                int sz = s.size();

                for (int i = 0; i < sz; i++)
                {
                    cout << '-';
                }
                cout << nl;

                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << s << nl;
            }
            else
            {
                int first = s.size();
                int sec = ss.size();
                int cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }

                cur += first - sec;
                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }

                cout << ss << nl;
                if (sum < 0)
                    cout << '-' << " ";
                int sz = s.size();

                for (int i = 0; i < sz; i++)
                {
                    cout << '-';
                }
                cout << nl;
                cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }

                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << s << nl;
            }
        }

        else
        {
            int g = gcd(t, modules);

            while (gcd(t, modules) > 1)
            {
                int nn = gcd(t, modules);
                t /= nn;
                modules /= nn;
            }
            string s = to_string(t); // 4
            string ss = to_string(modules);

            string aa = to_string(avg); // 5

            if (s.size() == ss.size())
            {
                // cout << "kkkk" << nl;
                int cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }
                cur += aa.size();
                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << ss << nl;
                if (sum < 0)
                    cout << '-' << " ";
                int sz = s.size();
                cout << avg;
                for (int i = 0; i < sz; i++)
                {
                    cout << '-';
                }
                cout << nl;
                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << s << nl;
            }
            else
            {
                // cout << "ahit" << nl;
                int first = s.size();
                int sec = ss.size();
                int cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }
                cur += aa.size();
                cur += first - sec;
                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << ss << nl;
                if (sum < 0)
                    cout << '-' << " ";
                int sz = s.size();
                cout << avg;
                for (int i = 0; i < sz; i++)
                {
                    cout << '-';
                }
                cout << nl;

                cur = 0;
                if (sum < 0)
                {
                    cur = 2;
                }
                cur += aa.size();
                for (int i = 0; i < cur; i++)
                {
                    cout << " ";
                }
                cout << s << nl;
            }
        }
    }
}
