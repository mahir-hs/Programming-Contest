#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000010
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;
bool vis[mx];
vii v[mx];
int arr[mx];
int ans, x, y;
void dfs(int a)
{
    vis[a] = true;
    if (arr[a] > y)
        return;
    if (a != 1 && v[a].size() == 1)
        ans++;
    for (int i = 0; i < v[a].size(); i++)
    {
        int b = v[a][i];
        if (!vis[b])
        {
            if (arr[b] == 0)
                arr[b] = 0;
            else
            {
                arr[b] += arr[a];
            }
            dfs(b);
        }
    }
}
int main()
{

    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < x - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(1);
    cout << ans;
}
