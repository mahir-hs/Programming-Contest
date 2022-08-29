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
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
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
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

int main()
{
    string a, b;
    cin >> a >> b;
    int sz_a = a.size();
    int sz_b = b.size();
    if (sz_b > sz_a)
    {
        cout << "need tree" << endl;
        return 0;
    }
    else if (sz_a == sz_b) //array
    {
        string aa = a;
        string bb = b;
        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end());
        if (aa == bb)
        {
            cout << "array";
        }
        else
        {
            cout << "need tree" << endl;
            return 0;
        }
    }
    else
    {
        bool check = true;
        map<char, int> ma;
        map<char, int> mb;
        for (int i = 0; i < sz_b; i++)
        {
            mb[b[i]]++;
        }
        for (int i = 0; i < sz_a; i++)
        {
            ma[a[i]]++;
        }
        for (int i = 0; i < sz_b; i++)
        {
            if (ma[b[i]] < mb[b[i]])
            {
                check = false;
            }
        }
        if (!check)
        {
            cout << "need tree" << endl;
            return 0;
        }
        else //automaton
        {
            int save = 0;
            int now = 0;
            bool what = true;

            // for (int j = 0; j < sz_a; j++)
            // {
            //     if (b[0] == a[j])
            //     {
            //         save = j;
            //         break;
            //     }
            // }

            // for (int i = save; i < save + sz_b; i++)
            // {
            //     if (b[now++] != a[i])
            //     {
            //         what = false;
            //     }
            // }

            //HEY..... WHAT TIME IS IT?
            //IT'S LIS TIME....(roar)
            int j = 0;
            int k = 0;
            int cnt = 0;
            for (int i = 0; i < sz_b; i++)
            {
                for (j = k; j < sz_a; j++)
                {
                    if (b[i] == a[j])
                    {
                        k = j + 1;
                        cnt++;
                        break;
                    }
                }
            }

            if (cnt == sz_b)
            {
                cout << "automaton" << endl;
            }
            else
            {
                cout << "both" << endl;
                return 0;
            }
        }
    }
}
