#include <bits/stdc++.h>
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
#define mx 200005
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
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
using namespace std;

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
int cnt = 0;
int a, b, c;
void how_many(int sec, int what)
{
    if (what == 0)
    {
        if (sec == a)
            cnt++; ///counting the path which is equal to the correct string
        return;
    }
    how_many(sec + 1, what - 1);
    how_many(sec - 1, what - 1);
}

int main()
{
    string s, s1;
    cin >> s >> s1;
    a = 0, b = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            a++;
        }
        else if (s[i] == '-')
        {
            a--;
        }
        if (s1[i] == '+')
        {
            b++;
        }
        else if (s1[i] == '-')
        {
            b--;
        }
        else
        {
            c++;
        }
    }

    how_many(b, c);
    double ans = pow(0.5, c) * cnt; //each possible path have the probability of 0.5^C
    cout << fixed << setprecision(12) << ans << endl;
}