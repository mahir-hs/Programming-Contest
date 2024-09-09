#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000005
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;
bool cmp(string &a, string &b)
{
    return a.size() < b.size();
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        ll a, b = 0, c = 0, d = 0;
        cin >> a;
        b = sqrt(a);
        while (b * b < a)
        {
            b++;
        }
        c = b - 1;
        d = b;
        while (b < a)
        {
            b += d;
            c++;
        }

        cout << c << endl;
    }
}