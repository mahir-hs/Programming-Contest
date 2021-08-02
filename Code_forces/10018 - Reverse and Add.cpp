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

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        ll y, cnt = 0, z = 0;
        cin >> y; 
        string a = to_string(y);
        string b = a;
        reverse(b.begin(), b.end());
        while (a != b)
        {
            stringstream xx(b);
            xx >> z;
            y += z;
            a = to_string(y);
            b = a;
            reverse(b.begin(), b.end());
            cnt++;
        }

        cout << cnt << " " << y << endl;
    }
}
